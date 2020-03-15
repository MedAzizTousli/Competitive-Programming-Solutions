#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n, w;
    cin >> n >> w;
    vector<ll> W(n+1);
    vector<ll> V(n+1);
    rep(i, 1, n+1)
        cin >> W[i] >> V[i];
    vector<vector<ll>> dp(n+1, vector<ll>(w+1,0)); // A ajouter fel tips
    rep(i, 1, n+1)
    {
        rep(j, 1, w+1)
        {
            if (W[i] > j)
                dp[i][j] = dp[i-1][j];
            else 
                dp[i][j] = max(dp[i-1][j], V[i]+dp[i-1][j-W[i]]);
        }
    }
    cout << dp[n][w];
    return 0;
}