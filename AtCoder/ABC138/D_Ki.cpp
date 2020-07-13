#include <bits/stdc++.h>
#define int long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

vector<bool> visited;
vector<vector<int>> adj; // Outside main
vector<int> res;

void dfs(int v) {
    visited[v] = true;
    for (int to : adj[v]) {
        if (!visited[to]) {
            res[to] += res[v];
            dfs(to);
        }
    }
}

signed main()
{
    int n, q;
    cin >> n >> q;
    adj.resize(n); // Inside main
    visited.resize(n); // Inside main
    rep(i, 0, n-1)
    {
        int a, b;
        cin >> a >> b;
        a--; b--; // To have graph indexed from 0
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    res.resize(n); // Inside main
    rep(i, 0, q)
    {
        int p, x;
        cin >> p >> x;
        res[p-1] += x;
    }
    dfs(0);
    rep(i, 0, n)
        cout << res[i] << " ";
    return 0;
}