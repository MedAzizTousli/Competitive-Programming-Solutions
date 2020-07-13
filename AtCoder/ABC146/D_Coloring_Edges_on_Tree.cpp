#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<vector<int>> adj; // Outside main
    adj.resize(n);           // Inside main
    vector<pair<int, int>> vp(n - 1);
    rep(i, 0, n - 1)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--; // To have graph indexed from 0
        adj[a].push_back(b);
        adj[b].push_back(a);
        vp[i] = {a, b};
    }
    int s = 0; // source vertex
    int mx = 0;
    map<pair<int, int>, int> mp;
    queue<int> q;
    vector<bool> used(n);
    vector<int> cs(n, 0);
    q.push(s);
    used[s] = true;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        mx = max(mx, (int)adj[v].size());
        int curr = 1;
        for (int u : adj[v])
        {
            if (!used[u])
            {
                if (cs[v] == curr)
                    curr++;
                cs[u] = curr;
                mp[{v, u}] = curr;
                curr++;
                used[u] = true;
                q.push(u);
            }
        }
    }
    cout << mx << endl;
    for (auto x : vp)
        cout << mp[x] << endl;
    return 0;
}