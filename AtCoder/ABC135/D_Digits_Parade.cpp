#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int m = 1e9+7;
    string s;
    cin >> s;
    int N = s.size();
    vector<vector<int>> dp(N+1, vector<int>(13, 0));
    dp[0][0] = 1;
    rep(i, 0, N)
    {
        if (s[i] != '?')
        {
            int j = s[i] - '0';
            rep(k, 0, 13)
                dp[i+1][(k*10+j)%13] += dp[i][k] % m;
        }
        else
        {
            rep(j, 0, 10)
                rep(k, 0, 13)
                    dp[i+1][(k*10+j)%13] += dp[i][k] % m;
        }
    }
    cout << dp[N][5] % m;
    return 0;
}