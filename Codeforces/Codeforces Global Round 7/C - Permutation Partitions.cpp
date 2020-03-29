//https://codeforces.com/contest/1324/problem/B
#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    vector<pair<ll,ll>> vs(n);
    ll MOD = 998244353;
    rep(i, 0, n)
    {
        ll a;
        cin >> a;
        v[i] = a;
        vs[i] = {a, i};
    }
    sort(rbegin(vs), rend(vs));
    vector<ll> s;
    ll sum = 0;
    rep(i, 0, k)
    {
        sum += vs[i].first;
        s.push_back(vs[i].second);
    }
    sort(begin(s), end(s));
    ll ans = 1;
    rep(i, 0, s.size()-1)
        ans = (ans * (s[i+1] - s[i])) % MOD;
    if (n == k)
    {
        cout << sum << " " << 1;
        return 0;
    }
    cout << sum << " " << ans % MOD;
    return 0;
}