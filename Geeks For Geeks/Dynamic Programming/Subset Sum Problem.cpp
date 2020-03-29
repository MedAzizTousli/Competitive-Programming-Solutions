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
        int sum = 0;
        rep(i, 0, n)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }
        sum = sum / 2;
        sort(begin(v), end(v));
        vector<vector<bool>> dp(n, vector<bool>(sum+1,0));
        rep(i, 0, n)
            rep(j, 0, sum+1)
            {
                if (j == 0) 
                    dp[i][j] = true;
                if (i == 0 && j != 0) 
                    dp[i][j] = false;
                if (i == 0 && v[i] == j) 
                    dp[i][j] = true;
                if (i != 0 && j != 0)
                    if (v[i] > j)
                        dp[i][j] = dp[i-1][j]; 
                    else
                        dp[i][j] = dp[i-1][j] || dp[i-1][j-v[i]]; 
            }
        cout << (dp[n-1][sum]?"YES":"NO") << "\n";
    }
    return 0;
}