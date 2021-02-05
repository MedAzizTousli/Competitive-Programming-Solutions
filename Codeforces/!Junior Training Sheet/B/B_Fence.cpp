#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n+1);
    rep(i, 1, n+1)
        cin >> v[i];
    vector<int> dp(n+1);
    dp[0] = 0;
    rep(i, 1, n+1)
        dp[i] = dp[i-1] + v[i];
    int m = LLONG_MAX;
    int res = 0;
    k--;
    for(int i = 1; i + k <= n; i++)
    {
        if (dp[i+k]-dp[i-1] < m)
        {
            m = dp[i+k]-dp[i-1];
            res = i;
        }
    }
    cout << res;
    return 0;
}