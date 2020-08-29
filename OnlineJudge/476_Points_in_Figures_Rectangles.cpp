#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    double v[10][4];
    int n = 0;
    while(1)
    {
        char c;
        cin >> c;
        if (c == '*')
            break;
        rep(i, 0, 4)
            cin >> v[n][i];
        n++;
    }
    int p = 1;
    while(1)
    {
        double x, y;
        cin >> x >> y;
        if (x == 9999.9 && y == 9999.9)
            break;
        bool verif = false;
        rep(i, 0, n)
        {
            double x1 = v[i][0];
            double y1 = v[i][1];
            double x2 = v[i][2];
            double y2 = v[i][3];
            if (x > x1 && x < x2 && y > y2 && y < y1)
            {
                verif = true;
                printf("Point %lld is contained in figure %lld\n", p, i+1);
            }
        }
        if (verif == false)
            printf("Point %lld is not contained in any figure\n", p);
        p++;
    }
    return 0;
}