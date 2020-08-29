#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    cout.precision(3);
    double x[4], y[4];
    set<pair<double, double>> s;
    double xc, yc;
    while(cin >> x[0] >> y[0])
    {
        s.clear();
        rep(i, 1, 4)
            cin >> x[i] >> y[i];
        rep(i, 0, 4)
        {
            if (s.find({x[i], y[i]}) != s.end())
            {
                s.erase({x[i], y[i]});
                xc = x[i];
                yc = y[i];
            }
            else 
                s.insert({x[i], y[i]});
        }
        auto it = s.begin();
        double xa = it->first, ya = it->second;  
        it++;
        double xb = it->first, yb = it->second;
        printf("%.3lf %.3lf\n", xb + xa - xc, yb + ya - yc);
    }
    return 0;
}