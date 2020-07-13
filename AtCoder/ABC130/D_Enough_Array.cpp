#include <bits/stdc++.h>
#define int long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    vector<int> dp(n+1, 0);
    rep(i, 1, n + 1)
        dp[i] = dp[i-1] + v[i-1];
    int res = 0;
    rep(i, 0, n + 1)
    {
        if (dp[i] >= k)
        {
            int x = upper_bound(begin(dp), end(dp), dp[i] - k) - begin(dp);
            res += x;
        }
    }
    cout << res;
    return 0;
}