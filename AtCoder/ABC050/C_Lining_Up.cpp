#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

ll m = 1e9+7;

ll pw(ll a, ll n)
{
    ll ans = 1;
    while (n > 0)
    {
        if (n % 2 != 0)
            ans = (ans * a) % m;
        a = (a * a) % m;
        n = n / 2;
    }
    return ans % m;
}

int main()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    rep(i, 0, n)
    {
        ll a;
        cin >> a;
        mp[a]++;
    }
    bool y = true;
    for (auto x:mp)
    {
        if (n%2 == 0 && x.second != 2)
            y = false;
        if (n%2 == 1 && x.second != 2 && x.first != 0)
            y = false;
        if (n%2 == 1 && x.second != 1 && x.first == 0)
            y = false;
    }
    if (y == false)
        cout << 0;
    else 
        cout << (ll)pw(2, n/2) % m;
    return 0;
}