#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    cout.precision(12);
    int n;
    cin >> n;
    vector<double> p(n+1);
    rep(i, 1, n+1)
        cin >> p[i];
    vector<vector<double>> dp(n+1, vector<double>(n+1,0.0));
    dp[0][0] = 1.0;
    rep(i, 1, n+1)
        rep(j, 0, i+1)
        {
            if (j == 0)
                dp[i][j] = dp[i-1][j] * (1.0 - p[i]);
            else 
                dp[i][j] = dp[i-1][j] * (1.0 - p[i]) + dp[i-1][j-1] * p[i];
        }
    double sum = 0.0;
    rep(i, (n+1)/2, n+1)
        sum += dp[n][i];
    cout << sum << setprecision(12);
    return 0;
}