#include <bits/stdc++.h>
#define int long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    FLASH
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int res = n % x;
        int res2 = (n - res - (x - y));
        if (res == y)
            cout << n << "\n";
        else if (res2 + x > n)
            cout << res2 << "\n";
        else 
            cout << res2 + x << "\n";
        // cout << max()
    }
    return 0;
}