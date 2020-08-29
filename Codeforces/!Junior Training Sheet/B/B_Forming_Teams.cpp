#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

vector<vector<int>> adj; // Outside main
vector<bool> visited;    // Outside main

bool dfs(int curr, int par, int &cnt)
{
    if (visited[curr])
        return 1;
    visited[curr] = true;
    for (int child : adj[curr])
    {
        if (child != par)
        {
            cnt++;
            if (dfs(child, curr, cnt) == 1)
                return 1;
        }
    }
    return 0;
}

signed main()
{
    int n, m;
    cin >> n >> m;
    adj.resize(n);     // Inside main
    visited.resize(n); // Inside main
    rep(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--; // To have graph indexed from 0
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int res = 0;
    rep(i, 0, n)
    {
        if (!visited[i])
        {
            int cnt = 0;
            bool y = dfs(i, -1, cnt);
            if (y == 1 && cnt % 2 == 1)
                res++;
        }
    }
    if ((n - res) % 2 == 1)
        res++;
    cout << res;
    return 0;
}