#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int h, w;
    cin >> h >> w;
    vector<vector<int>> v(h);
    int x = 100LL;
    rep(i, 0, h)
        rep(j, 0, w)
        {
            int a;
            cin >> a;
            v[i].push_back(a);
            x = min(x, a);
        }
    int res = 0;
    rep(i, 0, h)
        rep(j, 0, w)
            res += (v[i][j] - x);
    cout << res;
	return 0;
}