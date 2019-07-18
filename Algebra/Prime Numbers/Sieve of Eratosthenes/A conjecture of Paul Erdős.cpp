// Submit here: http://www.spoj.com/problems/HS08PAUL/

#include <bits/stdc++.h>
#define ll unsigned long long
#define MAX 10000000

using namespace std;

bool is_prime(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for(int i = 3;i <= n/i;i += 2)
        if(n % i == 0) return false;

    return true;
}

int main()
{
    ll T=0, n=0, s=0, j=0;
    map<ll,ll> mp;
    vector<ll> primes;
    for(ll i = 1;i*i< MAX;++i)
            for(ll j = 1; j * j * j * j < MAX;++j)
                if(mp[i * i + j * j * j * j]==0 && is_prime(i * i + j * j * j * j)==true)
                {
                    primes.push_back(i * i + j * j * j * j); mp[i * i + j * j * j * j]++;
                }
    sort(primes.begin(),primes.end());
    cin >> T;
    while(T--){
            scanf("%lld",&n);

            if(n == 1) printf("0\n");
            else{
                int rep=lower_bound(primes.begin(),primes.end(),n)-primes.begin();
                if (binary_search (primes.begin(), primes.end(), n))
                 printf("%d\n",rep+1);
                else
                printf("%d\n",rep);
            }
        }
    return 0;
}
