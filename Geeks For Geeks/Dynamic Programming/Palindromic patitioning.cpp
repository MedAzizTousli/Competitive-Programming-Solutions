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
        string s;
        cin >> s;
        int N = s.size();
        vector<vector<bool>> palin(N, vector<bool>(N, false));
        rep(i, 0, N)
        {
            palin[i][i] = true;
            if (i <= N - 2)
                if (s[i] == s[i+1])
                    palin[i][i+1] = true;
        }
        rep(len, 3, N + 1)
            rep(i, 0, N - len + 1)
            {
                int j = i + len - 1;
                if (s[i] == s[j])
                    palin[i][j] = palin[i+1][j-1];
            }
        vector<int> dp(N, INT_MAX);
        rep(i, 0, N)
        {
            if (palin[0][i] == true)
                dp[i] = 1;
            else 
                rep(k, i + 1, 0)
                    if (palin[k][i] == true)
                        dp[i] = min(dp[i], dp[k-1] + 1);
        }
        cout << dp[N-1] - 1 << endl;
    }
    return 0;
}