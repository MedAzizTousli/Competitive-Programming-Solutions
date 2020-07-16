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
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n);
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
            {
                int e; cin >> e;
                v[i].push_back(e);
            }
        vector<vector<int>> dp(n, vector<int>(m, 0));
        int res = 0;
        rep(i, 0, n)
            rep(j, 0, m)
            {
                if (i == 0)
                    dp[i][j] = v[i][j];
                else if (j == 0)
                    dp[i][j] = v[i][j];
                else 
                    if (v[i][j] == 1)
                        dp[i][j] = min({dp[i][j-1], dp[i-1][j-1], dp[i-1][j]}) + 1;
                    else 
                        dp[i][j] = 0;
            }
        rep(i, 0, n)
            res = max(res, *max_element(dp[i].begin(), dp[i].end()));
        cout << res << endl;
    }
    return 0;
}