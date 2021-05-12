#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n;
    cin >> n;
    int res = LLONG_MAX;
    vector<pair<int, int>> a(n);
    vector<pair<int, int>> b(n);
    rep(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        a[i] = {x, i};
        b[i] = {y, i};
    }
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    if (a[0].second == b[0].second)
        res = min(res, a[0].first + b[0].first);
    else 
        res = min(res, max(a[0].first, b[0].first));
    res = min(res, max(a[0].first, b[1].first));
    res = min(res, max(a[1].first, b[0].first));
    cout << res;
	return 0;
}