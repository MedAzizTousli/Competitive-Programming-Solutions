#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

vector<string> strv;

int main()
{
    int T; cin >> T; while(T--) {
    string s, t;
    int n, m;
    cin >> n >> m;
    cin >> s >> t;
    vector<vector<int>> dp(s.size()+1, vector<int>(t.size()+1, 0));
    int res = 0;
    rep(i, 0, s.size())
        rep(j, 0, t.size())
        {
            if (s[i] == t[j])
            {
                dp[i+1][j+1] = dp[i][j] + 1;
                res = max(res, dp[i+1][j+1]);
            }
            else
                dp[i+1][j+1] = 0;
        }
    cout << res << endl;
    }
    return 0;
}