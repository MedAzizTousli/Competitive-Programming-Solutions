#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double x = 1/sqrt((a/b)/c);
    double y = 1/sqrt((b/a)/c);
    double z = 1/sqrt((c/a)/b);
    cout << x * 4 + y * 4 + z * 4;
    return 0;
}