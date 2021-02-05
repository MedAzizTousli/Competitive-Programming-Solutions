#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

// bool f(pair<int,int> a, pair<int,int> b)
// {
//     return a.second < b.second;
// }

signed main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(m);
    rep(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        v[i] = {b, a};
    }
    sort(v.rbegin(), v.rend());
    int res = 0;
    rep(i, 0, m)
    {
        int x = v[i].second;
        if (n>=x)
            res += (x * v[i].first);
        else 
            res += (n * v[i].first);
        n -= x;
        if (n <= 0)
            break;
    }
    cout << res;
    return 0;
}