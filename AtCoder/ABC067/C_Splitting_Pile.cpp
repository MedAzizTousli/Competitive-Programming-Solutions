#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    rep(i, 0, n)
        cin >> v[i];
    vector<ll> dp1(n-1);
    vector<ll> dp2(n-1);
    dp1[0] = v[0];
    dp2[0] = v[n - 1];
    rep(i, 1, n - 1)
        dp1[i] = dp1[i-1] + v[i];
    rep(i, 1, n - 1)
        dp2[i] = dp2[i-1] + v[n-i-1];
    // rep(i, 0, n)
    //     cout << dp1[i] << " ";
    // cout << endl;
    // rep(i, 0, n)
    //     cout << dp2[i] << " ";
    ll ans = INT_MAX;
    rep(i, 0, n-1)
        ans = min(ans, abs(dp1[i]-dp2[n-2-i]));
        // cout << dp1[i] << " " << dp2[n-2-i] << endl;
    
    cout << ans;
    return 0;
}