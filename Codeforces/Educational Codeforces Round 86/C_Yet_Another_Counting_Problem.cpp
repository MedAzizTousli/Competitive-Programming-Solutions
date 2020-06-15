#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, q;
        cin >> a >> b >> q;
        ll lcm = a * b / __gcd(a, b);
        int m = max(a, b);
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            if (r < m)
            {
                cout << "0 ";
                continue;
            }
            ll range = max(0LL, r - l + 1);
            ll rightmost = r / lcm;
            ll leftmost = l / lcm + (l % lcm == 0 ? 0 : 1);
            ll nb = rightmost - leftmost + 1;
            ll ans = range - nb * m;
            if (rightmost * lcm + m - 1 > r)
                ans += rightmost * lcm + m - 1 - r;
            if ((leftmost - 1) * lcm + m - 1 >= l)
                ans -= (leftmost - 1) * lcm + m - l;
            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}