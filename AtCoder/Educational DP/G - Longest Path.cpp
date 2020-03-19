#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int nbr;
bool visited[100005];
vector<int> adj[100005];
vector<int> dp(100005, 0);

void dfs(int s)
{
    visited[s] = true;
    for (int i = 0; i < adj[s].size(); i++)
    {
        if (visited[adj[s][i]] == false)
            dfs(adj[s][i]);
        dp[s] = max(dp[adj[s][i]] + 1, dp[s]);
    }
}

int main()
{
    cin >> nbr;
    int m;
    cin >> m;
    rep(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
    }
    memset(visited, false, sizeof visited);
    for (int i = 0; i < nbr; i++)
        if (visited[i] == false)
            dfs(i);
    cout << *max_element(dp.begin(), dp.end());
    return 0;
}