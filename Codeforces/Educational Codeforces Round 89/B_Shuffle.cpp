#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, x, m;
        cin >> n >> x >> m;
        ll mi = n, ma = 1;
        bool y = false;
        rep(i, 0, m)
        {
            ll l, r;
            cin >> l >> r;
            if ((x >= l && x <= r) || (y == true && r >= mi && l <= ma))
            {
                mi = min(l, mi);
                ma = max(r, ma);
                y = true;
            }
        }
        ll res = ma - mi + 1;
        cout << (res<=0?1:res) << endl;
    }
    return 0;
}