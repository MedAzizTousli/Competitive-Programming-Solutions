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
    int a = LLONG_MAX, b = LLONG_MAX;
    int x = -1, y = -1;
    rep(i, 0, n)
        rep(j, 0, m)
        {
            if (v[i][j] == '*')
            {
                a = min(a, i);
                b = min(b, j);
                x = max(x, i);
                y = max(y, j);
            }
        }
    rep(i, a, x+1)
    {
        rep(j, b, y+1)
            cout << v[i][j];
        cout << endl;
    }

    return 0;
}