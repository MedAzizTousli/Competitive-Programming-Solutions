#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;


signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    vector<vector<int>> dp(n, vector<int>(60, 0));
    for (int i = n - 2; i >= 0; i--)
        for (int j = 0; j < 60; j++)
        {
            dp[i][j] = dp[i+1][j];
            if ((v[i+1] & (1LL << j)) > 0)
                dp[i][j]++;
        }
    int res = 0;
    int MOD = 1e9+7;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < 60; j++)
        {
            if ((v[i] & (1LL << j)) > 0)
                res += (((n - i - 1 - dp[i][j]) % MOD) * ((1LL << j) % MOD)) % MOD;
            else 
                res += ((dp[i][j] % MOD) * ((1LL << j) % MOD)) % MOD;
            res %= MOD;
        }
    }
    cout << endl << res % MOD;
    return 0;
}