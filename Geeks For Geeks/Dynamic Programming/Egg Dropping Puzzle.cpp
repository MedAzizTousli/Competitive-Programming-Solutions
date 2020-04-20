#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, K;
        cin >> n >> K;
        vector<vector<int>> dp(n+1, vector<int>(K+1));
        rep(i, 1, n + 1)
            rep(j, 1, K + 1)
            {
                int res = INT_MAX;
                if (i == 1)
                    dp[i][j] = j;
                else 
                    if (i > j)
                        dp[i][j] = dp[i-1][j];
                    else 
                    {
                        rep(k, 1, j + 1)
                        {
                            if (k == 1)
                                res = min(res, max(0, dp[i][j-1]));
                            else if (k == j)
                                res = min(res, max(dp[i-1][j-1], 0));
                            else 
                                res = min(res, max(dp[i-1][k-1], dp[i][j-k]));
                        }
                        dp[i][j] = res + 1;
                    }
            }
        cout << dp[n][K] << endl;
    }
    return 0;
}