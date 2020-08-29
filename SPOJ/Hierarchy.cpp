#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

vector<vector<int>> adj; // Outside main
vector<bool> visited; // Outside main
stack<int> s;

void dfs(int v) {
    visited[v] = true;
    for (int to : adj[v]) {
        if (!visited[to]) {
            dfs(to);
        }
    }
    s.push(v);
}

signed main()
{
    int n, k;
    cin >> n >> k;
    adj.resize(n+1); // Inside main
    visited.resize(n+1, 0); // Inside main
    rep(i, 1, k+1)
    {
        int N;
        cin >> N;
        rep(j, 0, N)
        {
            int a;
            cin >> a;
            adj[i].push_back(a);
        }
    }
    rep(i, 1, n+1)
        if (!visited[i])
            dfs(i);
    int pos = 0;
    vector<int> res(n+1);
    while (!s.empty())
    {
        int x = s.top();
        s.pop();
        res[x] = pos;
        pos = x;
    }
    rep(i, 1, n+1)
        cout << res[i] << endl;
    return 0;
}