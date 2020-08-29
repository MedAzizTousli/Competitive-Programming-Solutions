#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    rep(i, 0, n)
        cin >> v[i];
    vector<bool> y(n);
    rep(j, 0, m)
    {
        int mx = 0;
        int idx;
        rep(i, 0, n)
        {
            int z = v[i][j] - '0';
            mx = max(mx, z);
        }
        rep(i, 0, n)
        {
            int z = v[i][j] - '0';
            if (z == mx)
                y[i] = true;
        }
    }
    cout << accumulate(begin(y), end(y), 0LL);
    return 0;
}