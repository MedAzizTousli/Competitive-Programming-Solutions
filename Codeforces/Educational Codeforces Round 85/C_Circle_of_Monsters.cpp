#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        rep(i, 0, n)
            cin >> a[i] >> b[i];
        vector<ll> dp(n);
        dp[0] = 0;
        rep(i, 1, n)
            dp[i] = dp[i-1] + max(0LL, a[i] - b[i-1]);
        ll best = LLONG_MAX;
        rep(i, 0, n)
        {
            ll act = a[i];
            if (i == 0)
                act += dp[n-1];
            else 
                act += dp[n-1] - dp[i] + dp[i-1] + max(0LL, a[0] - b[n-1]);
            best = min(act, best);
        }
        cout << best << "\n";
    }
    return 0;
}