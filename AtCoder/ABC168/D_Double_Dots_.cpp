#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj; // Outside main
    adj.resize(n); // Inside main
    rep(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        a--; b--; // To have graph indexed from 0
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // int n; // number of nodes
    int s = 0; // source vertex

    queue<int> q;
    vector<bool> used(n);
    vector<int> d(n), p(n, -1);

    q.push(s);
    used[s] = true;
    p[s] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (!used[u]) {
                used[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
    bool res = true;
    rep(i, 1, n)
        if (p[i] == -1)
            res = false;
    if (res == true)
    {
        cout << "Yes" << endl;
        rep(i, 1, n)
            cout << p[i] + 1 << endl;
    }
    else
        cout << "No" << endl;
    return 0;
}