#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

vector<bool> visited; // Outside main
vector<vector<int>> adj; // Outside main
stack<int> s;

void dfs(int v) {
    visited[v] = true;
    for (int to : adj[v]) {
        if (!visited[to]) {
            dfs(to);
        }
    }
    s.push(v); // Stack for topological order
}

signed main()
{
    int n, m;
    while(cin >> n >> m)
    {
        if (n == 0)
            break;
        adj.clear();
		visited.clear();
        adj.resize(n+1); // Inside main
        visited.resize(n+1, 0);
        rep(i, 0, m)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
        }
        rep(i, 1, n+1)
            if (!visited[i])
                dfs(i);
        while(!s.empty())
        {
            int x = s.top();
            s.pop();
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}