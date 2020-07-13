#include <bits/stdc++.h>
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    rep(i, 0, n)
        cin >> v[i];
    sort(begin(v), end(v));
    vector<ll> dp(n);
    dp[0] = v[0];
    rep(i, 1, n)
        dp[i] = v[i] + dp[i-1];
    ll ans = 0;
    auto curr = begin(v);
    ll id;
    vector<pair<ll, ll>> w(m);
    rep(i, 0, m)
    {
        ll a, b;
        cin >> a >> b;
        w[i] = {b, a};
    }
    sort(rbegin(w), rend(w));
    rep(i, 0, m)
    {
        ll a = w[i].second;
        ll b = w[i].first;
        auto itr = lower_bound(curr, end(v), b);
        ll nb = distance(curr, itr);
        id = min(a, nb);
        curr = curr + id;
        if (id == 0)
            break;
        ans += b * id;
    }
    if (curr - begin(v) - 1 == -1)
        ans = dp[n-1];
    else 
        ans += dp[n-1] - dp[curr - begin(v) - 1];
    cout << ans;
    return 0;
}