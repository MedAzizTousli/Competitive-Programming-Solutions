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
    int res = 4;
    rep(i, 0, n)
        rep(j, 0, m)
        {
            int a;
            cin >> a;
            if (a == 1 && (i == 0 || i == n-1 || j == 0 || j == m-1))
                res = 2;
        }
    cout << res;
    return 0;
}