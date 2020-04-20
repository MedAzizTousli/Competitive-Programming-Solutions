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
      string p, s;
      cin >> p >> s;
      vector<vector<bool>> dp(s.size()+1, vector<bool>(p.size()+1, false));
      dp[0][0] = true;
      for (int i = 0; ; i++)
        if (p[i] == '*')
          dp[0][i+1] = true;
        else 
          break;
      rep(i, 0, s.size())
        rep(j, 0, p.size())
        {
          if (p[j] == '?' || p[j] == s[i])
            dp[i+1][j+1] = dp[i][j];
          else if (p[j] == '*')
            dp[i+1][j+1] = dp[i+1][j] + dp[i][j+1];
          else 
            dp[i+1][j+1] = false;
        }
      cout << dp[s.size()][p.size()] << endl;
    }
    return 0;
}  