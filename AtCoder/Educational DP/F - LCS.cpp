#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

vector<string> strv;

int main()
{
    string s, t;
    cin >> s >> t;
    vector<vector<int>> dp(s.size()+1, vector<int>(t.size()+1,0));
    rep(i, 0, s.size())
        rep(j, 0, t.size())
        {
            if (s[i] == t[j])
                dp[i+1][j+1] = dp[i][j] + 1;
            else 
                dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
        }
    int i = s.size();
    int j = t.size();
    string ch = "";
    while (i>0 && j>0)
    {
        if (dp[i][j] == dp[i][j-1])
            j--;
        else if (dp[i][j] == dp[i-1][j])
            i--;
        else 
        {
            ch += s[i-1];
            i--;
            j--;
        }
    }
    reverse(begin(ch), end(ch));
    cout << ch;
    return 0;