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
        vector<int> inp(n);
        rep(i, 0, n)
            cin >> inp[i];
        n--;
        vector<pair<int, int>> v(n);
        rep(i, 0, n)
            v[i] = {inp[i], inp[i+1]};
        vector<vector<int>> dp(n, vector<int>(n,0));
        rep(len, 2, n + 2)
            rep(i, 0, n - len + 1)
            {
                int j = i + len - 1;
                dp[i][j] = INT_MAX;
                rep(k, i, j)
                {
                    int cost = 0;
                    cost += dp[i][k] + dp[k+1][j];
                    cost += v[i].first * v[k].second * v[j].second;
                    dp[i][j] = min(dp[i][j], cost);
                }
            }
        cout << dp[0][n-1] << endl;        
    }
    return 0;
}