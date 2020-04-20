#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        // Matrix v1=x*y and v2=y*x
        vector<vector<int>> v(n);
        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++)
            {
                int e; cin >> e;
                v[i].push_back(e);
            }
        vector<vector<int>> dp(n, vector<int>(n, 0));
        dp[0][0] = v[0][0];
        rep (i, 0, n)
            rep (j, 0, n)
            {
                if (i == 0 && j == 0)
                    continue;
                if (i == 0)
                    dp[i][j] = v[i][j];
                else if (j == 0)
                    dp[i][j] = v[i][j] + max({dp[i-1][j], dp[i-1][j+1]});
                else if (j == n - 1)
                    dp[i][j] = v[i][j] + max({dp[i-1][j-1], dp[i-1][j]});
                else 
                    dp[i][j] = v[i][j] + max({dp[i-1][j-1], dp[i-1][j], dp[i-1][j+1]});
            }
        cout << *max_element(dp[n-1].begin(), dp[n-1].end()) << endl;        
    }
    return 0;
}