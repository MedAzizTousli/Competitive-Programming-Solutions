#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int sum(vector<pair<int, int>> v, int i, int j)
{
    int sum = 0;
    rep(k, i, j + 1)
        sum += v[k].second;
    return sum;
}

bool f(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    rep(i, 0, n)
        cin >> v[i].first;
    rep(i, 0, n)
        cin >> v[i].second;
    sort(begin(v), end(v), f);
    vector<vector<int>> dp(n, vector<int>(n));
    rep(i, 0, n)
        dp[i][i] = v[i].second;
    rep(len, 2, n + 1)
        rep(i, 0, n - len + 1)
        {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            rep(root, i, j+1)
            {
                int cost = 0;
                if (root > i)
                    cost += dp[i][root-1];
                if (root < j)
                    cost += dp[root+1][j];
                cost += sum(v, i, j);
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    cout << dp[0][n-1];
    return 0;
}