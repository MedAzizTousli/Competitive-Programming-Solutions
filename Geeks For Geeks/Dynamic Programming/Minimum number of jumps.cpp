#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        rep(i, 0, n)
            cin >> v[i];
        vector<int> dp(n, (int)1e9);
        dp[0] = 0;
        int j = 1;
        for (int i = 0; i < n; i++)
        {
            for (; j <= i + v[i]; j++)
            {
                if (j >= n - 1)
                    dp[n-1] = min(dp[n-1], dp[i] + 1);
                else
                    dp[j] = min(dp[j], dp[i] + 1);
            }
        }
        // rep(i, 0, n)
        //     cout << dp[i] << " ";
        // cout << endl;
        if (v[0] == 0)
        {
            cout << -1 << endl;
            continue;
        }
        cout << (dp[n-1]!=(int)1e9?dp[n-1]:-1) << endl;
    }
    return 0;
}