#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, f;
    cin >> n >> f;
    vector<pair<int,int>> v(n);
    rep(i, 0, n)
    {
        int a, b;
        cin >> a >> b;
        v[i].first = a;
        v[i].second = b;
    }
    vector<pair<int,int>> u(n);
    rep(i, 0, n)
    {
        int a = v[i].first;
        int b = v[i].second;
        int av = min(a, b);
        int ap = min(a*2, b);
        u[i].first = ap-av;
        u[i].second = av;
    }
    sort(rbegin(u), rend(u));
    int res = 0;
    rep(i, 0, f)
        res += u[i].first + u[i].second;
    rep(i, f, n)
        res += u[i].second;
    cout << res;
    return 0;
}