#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int w, h, n;
    cin >> w >> h >> n;
    int xmin = w, xmax = 0, ymin = h, ymax = 0;
    rep(i, 0, n)
    {
        int x, y, a;
        cin >> x >> y >> a;
        if (a == 1)
            xmax = max(xmax, x);
        if (a == 2)
            xmin = min(xmin, x);
        if (a == 3)
            ymax = max(ymax, y);
        if (a == 4)
            ymin = min(ymin, y);
    }
    cout << max(0, xmin-xmax) * max(0, ymin-ymax);
    return 0;
}