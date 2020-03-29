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
        int m, n;
        cin >> m;
        vector<int> v(m);
        rep(i, 0, m)
            cin >> v[i];
        cin >> n;
        vector<vector<int>> dp(m, vector<int>(n+1,0));
        rep(i, 0, m)
            rep(j, 0, n+1)
            {
                if (j == 0)
                    dp[i][j] = 1;
                else if (i == 0)
                    if (j != 0 && j%v[i]==0)
                        dp[i][j] = 1;
                    else; 
                else 
                {
                    if (v[i] > j)
                        dp[i][j] = dp[i-1][j];
                    else 
                        dp[i][j] = dp[i-1][j] + dp[i][j - v[i]];
                }
            }
        cout << dp[m-1][n] << endl;
    }    
    return 0;
}