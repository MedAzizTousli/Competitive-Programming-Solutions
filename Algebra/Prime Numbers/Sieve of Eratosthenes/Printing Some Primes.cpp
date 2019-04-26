#include <iostream>
#include <vector>
#define ll unsigned long long
#define MAX 100000000

using namespace std;

vector<char> sieve(ll n)
{
    vector<char> is_prime(n+1, true);
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
    vector<char> abc = sieve(MAX);
    ll j=0;
    for (ll i=0; i<MAX; i++)
    {
        if (abc[i]==true)
        {
            if (j%100==0)
                cout << i << endl;
            j++;
        }
    }
    return 0;
}
