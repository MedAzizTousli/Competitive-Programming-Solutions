#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, s;
    cin >> n >> s;
    vector<pair<int, int>> v(n);
    rep(i, 0, n)
        cin >> v[i].first >> v[i].second;
    sort(rbegin(v), rend(v));
    int res = 0;
    int curr = s;
    rep(i, 0, n)
    {
        int f = v[i].first;
        int t = v[i].second;
        res += curr - f;
        curr = f;
        res += max(0LL, t-res);
    }
    cout << res + curr;
    return 0;
}