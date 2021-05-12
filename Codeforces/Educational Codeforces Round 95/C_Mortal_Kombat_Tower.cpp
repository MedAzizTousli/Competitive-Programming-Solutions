#include <bits/stdc++.h>
// #define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

vector<int> v(200005);
int dp[200005][2];
int n;

int solve(int i, int turn)
{
    if (i >= n)
        return dp[i][turn] = 0;
    if (dp[i][turn] != -1)
        return dp[i][turn];
    if (turn == 1)
    {
        int mini = 1e9;
        if (i < n && v[i] == 1)
            mini = min(mini, solve(i+1, turn^1) + 1);
        if (i < n && v[i] == 0)
            mini = min(mini, solve(i+1, turn^1));
        if (i < n - 1 && v[i] == 0 && v[i+1] == 1)
            mini = min(mini, solve(i+2, turn^1)+1);
        if (i < n - 1 && v[i] == 0 && v[i+1] == 0)
            mini = min(mini, solve(i+2, turn^1));
        if (i < n - 1 && v[i] == 1 && v[i+1] == 0)
            mini = min(mini, solve(i+2, turn^1)+1);
        if (i < n - 1 && v[i] == 1 && v[i+1] == 1)
            mini = min(mini, solve(i+2, turn^1)+2);
        return dp[i][turn] = mini;
    }
    else 
    {
        int mini = 1e9;
        mini = min(solve(i+1, turn^1), solve(i+2, turn^1));
        return dp[i][turn] = mini;
    }
}

signed main()
{
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        rep(i, 0, n)
            cin >> v[i];
        memset(dp, -1, sizeof(dp));
        solve(0, 1);
        cout << dp[0][1] << "\n";
    }
    return 0;
}