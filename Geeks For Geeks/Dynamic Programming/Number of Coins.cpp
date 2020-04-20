#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll V, n;
        cin >> V >> n;
        vector<ll> v(n);
        rep(i, 0, n)
                cin >>
            v[i];
        sort(begin(v), end(v));
        vector<vector<ll>> dp(n, vector<ll>(V + 1, INT_MAX));
        rep(i, 0, n)
            rep(j, 0, V + 1)
        {
            if (i == 0)
                if (j%v[i] == 0) 
                    dp[i][j] = j / v[i];
                else;
            else if (j == 0)
                dp[i][j] = 0;
            else 
                if (v[i] > j)
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = min(dp[i][j-v[i]] + 1, dp[i-1][j]);
        }
        cout << (dp[n - 1][V] == INT_MAX ? -1 : dp[n - 1][V]) << endl;
    }
    return 0;
}