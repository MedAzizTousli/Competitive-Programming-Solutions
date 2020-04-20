#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<int>> dp(n, vector<int>(n, 1));
    rep(len, 2, n + 1)
        rep(i, 0, n - len + 1)
        {
            int j = i + len - 1;
            if (len == 2 && s[i] == s[j])
                dp[i][j] = 2;
            else
                if (s[i] == s[j])
                    dp[i][j] = dp[i+1][j-1] + 2;
                else 
                    dp[i][j] = max({dp[i+1][j-1], dp[i+1][j], dp[i][j-1]});
        }
    cout << dp[0][n-1];
    return 0;
}