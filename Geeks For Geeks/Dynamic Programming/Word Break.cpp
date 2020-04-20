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
        map<string, bool> mp;
        rep(i, 0, n)
        {
            string s;
            cin >> s;
            mp[s] = true;
        }
        string str;
        cin >> str;
        vector<vector<bool>> dp(str.size(), vector<bool>(str.size(),false));
        rep(i, 0, str.size())
        {
            string s = string(1, str[i]);
            dp[i][i] = mp[s];
        }
        rep(len, 2, str.size() + 1)
            rep(i, 0, str.size() - len + 1)
            {
                int j = i + len - 1;
                if (j == str.size())
                    continue;
                string s3 = str.substr(i, len);
                if (mp[s3] == true)
                {
                    dp[i][j] = true;
                    continue;
                }
                rep(k, i, j)
                {
                    if (dp[i][k] == true && dp[k+1][j] == true)
                        dp[i][j] = true;
                }
            }
        cout << dp[0][str.size()-1] << endl;
    }
    return 0;
}