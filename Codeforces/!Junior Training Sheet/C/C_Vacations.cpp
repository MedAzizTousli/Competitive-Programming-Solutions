#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int n;
vector<int> v;

int mem[101][4];

int dfs(int i, int prev)
{
    if (i == n)
        return 0;
    
    int &res = mem[i][prev];

    if (res != -1)
        return res;

    res = INT_MAX;

    if (prev == 0 && v[i] == 0)
        res = min(res, dfs(i+1, 2) + 1);
    if (prev == 0 && v[i] == 1)
        res = min(res, dfs(i+1, 1));
    if (prev == 0 && v[i] == 2)
        res = min(res, dfs(i+1, 2) + 1);
    if (prev == 0 && v[i] == 3)
        res = min(res, dfs(i+1, 1));

    if (prev == 1 && v[i] == 0)
        res = min(res, dfs(i+1, 2) + 1);
    if (prev == 1 && v[i] == 1)
        res = min(res, dfs(i+1, 2) + 1);
    if (prev == 1 && v[i] == 2)
        res = min(res, dfs(i+1, 0));
    if (prev == 1 && v[i] == 3)
        res = min(res, dfs(i+1, 0));
    
    if (prev == 2 && v[i] == 0)
        res = min(res, dfs(i+1, 2) + 1);
    if (prev == 2 && v[i] == 1)
        res = min(res, dfs(i+1, 1));
    if (prev == 2 && v[i] == 2)
        res = min(res, dfs(i+1, 0));
    if (prev == 2 && v[i] == 3)
    {
        res = min(res, dfs(i+1, 0));
        res = min(res, dfs(i+1, 1));
    }

    return res;
}

signed main()
{
    cin >> n;
    v.resize(n);
    rep(i, 0, n)
        cin >> v[i];

    memset(mem, -1, sizeof mem);

    int res1;
    if (v[0] == 0)
        res1 = dfs(1, 2) + 1;
    if (v[0] == 1)
        res1 = dfs(1, 1);
    if (v[0] == 2)
        res1 = dfs(1, 0);
    if (v[0] == 3)
        res1 = min(dfs(1, 1), dfs(1, 0));

    cout << res1;
	return 0;
}