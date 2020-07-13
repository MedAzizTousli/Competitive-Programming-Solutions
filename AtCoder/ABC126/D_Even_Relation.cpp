#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<vector<int>> adj; // Outside main
    adj.resize(n); // Inside main
    map<pair<int, int>, int> mp;
    rep(i, 0, n-1)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--; // To have graph indexed from 0
        adj[a].push_back(b);
        adj[b].push_back(a);
        mp[{a,b}] = c;
        mp[{b,a}] = c;
    }
    int s = 0; // source vertex
    
    queue<int> q;
    vector<bool> used(n);
    vector<int> d(n); //, p(n); // For parent and distance
    vector<int> res(n);
    q.push(s);
    used[s] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (!used[u]) {
                used[u] = true;
                q.push(u);
                d[u] = d[v] + mp[{u,v}];
                if (d[u]%2 == 0)
                    res[u] = 0;
                else 
                    res[u] = 1;
            }
        }
    }
    rep(i, 0, n)
        cout << res[i] << endl;
    return 0;
}