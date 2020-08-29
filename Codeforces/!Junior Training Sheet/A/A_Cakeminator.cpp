#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int r, c;
    cin >> r >> c;
    vector<string> v(r);
    rep(i, 0, r)
        cin >> v[i];
    int res = 0;
    rep(i, 0, r)
        rep(j, 0, c)
        {
            bool y = false;
            rep(k, 0, c)
                if (v[i][k] == 'S')
                    y = true;
            if (y == false)
                res++;
            else 
            {
                y = false;
                rep(k, 0, r)
                    if (v[k][j] == 'S')
                        y = true;
                if (y == false)
                    res++;
            }
        }
    cout << res;
    return 0;
}