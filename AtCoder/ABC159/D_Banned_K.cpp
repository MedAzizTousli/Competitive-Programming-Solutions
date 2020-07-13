#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    rep(i, 0, n)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll all = 0;
    for (auto x:mp)
        all += (x.second * (x.second-1)) / 2;
    rep(i, 0, n)
    {
        ll ans = all;
        ll x = mp[v[i]];
        ans -= (x * (x-1))/2;
        x--;
        ans += (x * (x-1))/2;
        cout << ans << endl;
    }
    return 0;
}