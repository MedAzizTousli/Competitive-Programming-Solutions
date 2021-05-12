#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int n;
vector<pair<int, int>> v;
int mem[100000+1];

int dfs(int i, int maxi)
{
    if (i == n-1)
        return 0;
    
    int &res = mem[i];

    if (res != -1)
        return res;

    res = 0;

    if (v[i].first - v[i].second > maxi)
        res = max(res, dfs(i+1, v[i].first) + 1);
    if (v[i].first + v[i].second < v[i+1].first)
        res = max(res, dfs(i+1, v[i].first + v[i].second) + 1);
    else 
        res = max(res, dfs(i+1, v[i].first));

    return res;
}

signed main()
{
    cin >> n;
    v.resize(n);
    memset(mem, -1, sizeof mem);
    rep(i, 0, n)
        cin >> v[i].first >> v[i].second;

    if (n == 1)
        cout << 1;
    else 
        cout << dfs(1, v[0].first) + 2;

	return 0;
}