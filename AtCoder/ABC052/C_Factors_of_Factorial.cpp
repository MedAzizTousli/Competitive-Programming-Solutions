#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

map<ll, ll> mp;

ll m = 1e9 + 7;

void trial_division(ll n)
{
    vector<ll> factorization;
    while (n % 2 == 0)
    {
        mp[2]++ % m;
        n /= 2;
    }
    for (ll d = 3; d * d <= n; d += 2)
    {
        while (n % d == 0)
        {
            mp[d]++ % m;
            n /= d;
        }
    }
    if (n > 1)
        mp[n]++ % m;
}

int main()
{
    ll n;
    cin >> n;
    rep(i, 1, n + 1)
        trial_division(i);
    ll ans = 1;
    for(auto x:mp)
        ans = ans * (x.second + 1) % m; 
    cout << ans % m;   
    return 0;
}