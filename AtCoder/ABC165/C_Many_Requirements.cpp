#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int m, n;
set<vector<int>> s;

void dfs(vector<int> y, int i)
{
    if (y.size() == n)
    {
        s.insert(y);
        return;
    }
    y.push_back(i);
    for (int j = i; j <= m; j++)
        dfs(y, j);
}

int main()
{
    int q;
    cin >> n >> m >> q;
    int v[q][4];
    rep(i, 0, q)
        cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
    rep(i, 1, m + 1)
        dfs({}, i);
    ll res = 0;
    for (auto x:s)
    {
        ll sum = 0;
        rep(i, 0, q)
        {
            int a = v[i][0];
            int b = v[i][1];
            int c = v[i][2];
            int d = v[i][3];
            if (x[b-1] - x[a-1] == c)
                sum += d;
        }
        res = max(res, sum);
    }
    cout << res;
    return 0;
}