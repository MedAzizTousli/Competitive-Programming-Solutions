#include <bits/stdc++.h>
#define int long long
#define FLASH                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int h, w;
    cin >> h >> w;
    vector<string> v(h + 1);
    v[0] = string(w + 1, '#');
    rep(i, 1, h + 1)
    {
        string s;
        cin >> s;
        v[i] = "#" + s;
    }
    vector<vector<pair<int,int>>> dp(h+2, vector<pair<int, int>>(w+2, {0, 0}));
    
    rep(i, 0, h+1)
        rep(j, 0, w+1)
        {
            if (v[i][j] == '.')
            {
                dp[i][j].first = dp[i-1][j].first + 1;
                dp[i][j].second = dp[i][j-1].second + 1;;
            }
        }

    rep(i, h+1, 0)
        rep(j, 0, w+1)
            if (dp[i][j].first != 0 && dp[i+1][j].first != 0)
                dp[i][j].first = dp[i+1][j].first;

    rep(i, 0, h+1)
        rep(j, w+1, 0)
            if (dp[i][j].second != 0 && dp[i][j+1].second != 0)
                dp[i][j].second = dp[i][j+1].second;
    
    int res = 0;
    vector<int> maxLine(h+1);
    rep(i, 0, h+1)
        rep(j, w+1, 0)
            res = max(res, dp[i][j].first + dp[i][j].second);
    
    cout << res - 1;
    return 0;
}