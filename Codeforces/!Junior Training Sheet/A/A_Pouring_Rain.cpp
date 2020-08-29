#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    cout.precision(20);
    double d, h, v, e;
    cin >> d >> h >> v >> e;
    double pi = 2*asin(1);
    double speed = 4*v / (pi * d * d);
    if (e >= speed)
        cout << "NO";
    else 
        cout << "YES\n" << setprecision(20) << h / (speed - e);
    return 0;
}