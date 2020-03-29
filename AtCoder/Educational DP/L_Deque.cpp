#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    rep(i, 0, n)
        cin >> v[i];
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    if (n % 2 != 0)
    {
        rep(i, 0, n)
            dp[i][i] = v[i];
        rep(len, 2, n + 1)
        {
            rep(i, 0, n - len + 1)
            {
                ll j = i + len - 1;
                if (len % 2 != 0)
                    dp[i][j] = max(dp[i+1][j] + v[i], dp[i][j-1] + v[j]);
                else 
                    dp[i][j] = min(dp[i+1][j] - v[i], dp[i][j-1] - v[j]);
            }
        }
    }
    else
    {
        rep(i, 0, n)
            dp[i][i] = - v[i];
        rep(len, 2, n + 1)
        {
            rep(i, 0, n - len + 1)
            {
                ll j = i + len - 1;
                if (len % 2 == 0)
                    dp[i][j] = max(dp[i+1][j] + v[i], dp[i][j-1] + v[j]);
                else 
                    dp[i][j] = min(dp[i+1][j] - v[i], dp[i][j-1] - v[j]);
            }
        }
    }
    cout << dp[0][n-1];
    return 0;
}