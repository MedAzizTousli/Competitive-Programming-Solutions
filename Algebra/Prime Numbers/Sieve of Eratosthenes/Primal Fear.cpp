#include <bits/stdc++.h>
#define ll long
#define MAX 1000000

using namespace std;

vector<bool> sieve(ll n)
{
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (ll j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    return is_prime;
}

int main()
{
    ll T=0, j=0, y=0, x=0; int s=0;
    bool fear=true;
    vector<bool> primesBool = sieve(MAX);
    vector<ll> primes;
    for (ll i=0; i<MAX; i++)
    {
        x=i;
        fear=true;
        string str = to_string(x);
        if (primesBool[x]==false)
            fear=false;
        else if (str.find("0") != std::string::npos)
            fear=false;
        else if (x!=2 && x!=5 && x!= 7 && x!=3)
        {
            int l = str.size();
            for (ll k=l; k>=1; k--)
            {
                ll p = pow(10,k);
                y = x % p;
                if (primesBool[y]==false)
                {
                    fear=false;
                    break;
                }
                x = y;
            }
        }
        if (fear==true)
            primes.push_back(i);
    }

    cin >> T;

    while(T--)
    {
        ll N=0;
        scanf("%lld",&N);
        int rep=lower_bound(primes.begin(),primes.end(),N)-primes.begin();
        if (binary_search(primes.begin(), primes.end(), N))
            printf("%d\n",rep+1);
        else
            printf("%d\n",rep);
    }
    return 0;
}
