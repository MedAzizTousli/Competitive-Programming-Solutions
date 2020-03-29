#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int nb;
    cin >> nb;
    while (nb--)
    {
        int p, q;
        cin >> p >> q;
        string s, t;
        cin >> s >> t;
        vector<vector<int>> dp(s.size()+1, vector<int>(t.size()+1, 0));
        rep(i, 0, s.size()+1)
            rep(j, 0, t.size()+1)
            {
                if (i == 0)
                    dp[i][j] = j;
                else if (j == 0)
                    dp[i][j] = i;
                else
                    if (s[i-1] == t[j-1])
                        dp[i][j] = dp[i-1][j-1];
                    else 
                        dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
            }      
        cout << dp[s.size()][t.size()] << endl;
    }
    return 0;
}