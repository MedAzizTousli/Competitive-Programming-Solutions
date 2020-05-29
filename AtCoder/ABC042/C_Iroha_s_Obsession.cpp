#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp2;
    rep(i, 0, k)
    {
        int d;
        cin >> d;
        mp2[d]++;
    }
    map<int, int> mp;
    rep(i, 0, 10)
        if (mp2[i] == 0)
            mp[i]++;
    vector<int> dp(10, -1);
    auto curr = mp.begin();
    rep(i, 0, 10)
    {
        if (i <= curr->first)
            dp[i] = curr->first;
        else
        {
            curr++;
            if (curr == mp.end())
                break;
            dp[i] = curr->first;
        }
    }
    string s = to_string(n);
    string res;
    if (dp[s[0] - '0'] == -1)
        res = to_string(dp[1]) + string(s.size(), to_string(dp[0])[0]);
    else if (dp[s[0]-'0'] > s[0]-'0')
        res = to_string(dp[s[0]-'0']) + string(s.size()-1, to_string(dp[0])[0]);
    else 
    {
        res = to_string(dp[s[0]-'0']);
        rep(i, 1, s.size())
        {
            if (dp[s[i] - '0'] != -1)
                res += to_string(dp[s[i] - '0']);
            else 
            {
                if (i == 1)
                    res += string(s.size(), to_string(dp[0])[0]);
                else 
                {
                    res[i-2] = res[i-1];
                    res[i-1] = to_string(dp[0])[0];
                    res += string(s.size()-i+1, to_string(dp[0])[0]);
                }
                break;
            }
        }
    }
    cout << res << endl;
    return 0;
}