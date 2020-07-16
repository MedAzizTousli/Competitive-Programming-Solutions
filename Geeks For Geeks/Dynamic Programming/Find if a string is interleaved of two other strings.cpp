#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a, b, c;
        cin >> a >> b >> c;
        int n = a.size() + 1;
        int m = b.size() + 1;
        a = "0" + a;
        b = "0" + b;
        c = "0" + c;
        vector<vector<bool>> dp(m, vector<bool>(n, false));
        dp[0][0] = true;
        rep(i, 1, n)
            if (a[i] == c[i] && dp[0][i-1] == true)
                dp[0][i] = true;
        rep(i, 1, m)
            if (b[i] == c[i] && dp[i-1][0] == true)
                dp[i][0] = true;
        rep(i, 1, m)
            rep(j, 1, n)
            {
                if (c[i+j] == a[j] && dp[i][j-1] == true)
                    dp[i][j] = true;
                if (c[i+j] == b[i] && dp[i-1][j] == true)
                    dp[i][j] = true;
            }
        cout << dp[m-1][n-1] << endl;
    }
    return 0;
}