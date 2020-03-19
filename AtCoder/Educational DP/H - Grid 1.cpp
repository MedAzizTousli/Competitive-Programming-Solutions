#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    ll mod = 1e9+7;
    vector<vector<char>> v(h, vector<char>(w,0));
    vector<vector<ll>> dp(h+1, vector<ll>(w+1,0));
    rep(i, 0, h)
        rep(j, 0, w)
            cin >> v[i][j];
    if (v[0][0] != '#') 
        dp[0][0] = 1;
    if (v[0][1] != '#')
        dp[0][1] = 1;
    if (v[1][0] != '#')
        dp[1][0] = 1;
    rep(i, 1, w)
        if (v[0][i] != '#')
            dp[0][i] = dp[0][i-1];
    rep(i, 1, h)
        if (v[i][0] != '#')
            dp[i][0] = dp[i-1][0];
    rep(i, 1, h)
        rep(j, 1, w)
        {
            if (v[i][j] != '#')
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
        }           
    cout << dp[h-1][w-1] % mod;
    return 0;
}