#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

bool kabisa(int y)
{
    return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
}

signed main()
{
    map<int, int> mp = {{1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30},
                        {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        int old_d = -1, old_m = -1, old_y = -1, old_c = -1;
        int res1 = 0, res2 = 0;
        while (n--)
        {
            int d, m, y, c;
            cin >> d >> m >> y >> c;
            if ((d == old_d+1 && m == old_m && y == old_y) ||
                (d == 1 && old_d == 31 && m == old_m+1 && mp[old_m] == 31 && y == old_y) ||
                (d == 1 && old_d == 30 && m == old_m+1 && mp[old_m] == 30 && y == old_y) ||
                (d == 1 && old_d == 31 && m == 1 && old_m == 12 && y == old_y+1) ||
                (d == 1 && old_d == 28 && m == 3 && old_m == 2 && kabisa(y) == false && y == old_y) ||
                (d == 1 && old_d == 29 && m == 3 && old_m == 2 && kabisa(y) == true && y == old_y)
                )
                res1++,
                res2+=c-old_c;
            old_d = d;
            old_m = m;
            old_y = y;
            old_c = c;
        }
        cout << res1 << " " << res2 << endl;
    }
    return 0;
}