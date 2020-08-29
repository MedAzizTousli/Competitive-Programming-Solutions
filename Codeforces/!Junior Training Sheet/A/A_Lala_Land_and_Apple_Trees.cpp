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
    vector<pair<int, int>> v(n);
    rep(i, 0, n)
        cin >> v[i].first >> v[i].second;
    sort(begin(v), end(v));
    vector<int> x(n);
    rep(i, 0, n)
        x[i] = v[i].first;
    int pos = upper_bound(begin(x), end(x), 0LL) - x.begin();
    int idx = min(pos, n-pos);
    int res = 0;
    rep(i, pos-idx, pos+idx)
        res += v[i].second;
    if (pos-idx-1 >= 0)
        res += v[pos-idx-1].second;
    else if (pos+idx < n)
        res += v[pos+idx].second;
    cout << res;
    return 0;
}