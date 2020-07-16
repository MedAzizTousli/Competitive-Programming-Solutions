#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int t;
    cin >> t;
    int M = 1e9+7;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> dp(n, vector<int>(m, 0));
        rep(i, 0, m)
            dp[0][i] = 1;
        rep(i, 0, n)
            dp[i][0] = 1;
        rep(i, 1, n)
            rep(j, 1, m)
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % M;
        cout << dp[n-1][m-1] << endl;
    }
    return 0;
}