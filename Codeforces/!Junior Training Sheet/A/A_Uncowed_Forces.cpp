#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    vector<double> s = {500, 1000, 1500, 2000, 2500};
    vector<double> m(5);
    vector<double> w(5);
    rep(i, 0, 5)
        cin >> m[i];
    rep(i, 0, 5)
        cin >> w[i];
    double hs, hu;
    cin >> hs >> hu;
    double res = 0;
    rep(i, 0, 5)
        res += max(0.3*(double)s[i], (1-m[i]/250.0)*s[i]-50*w[i]);
    cout << res + 100*hs - 50*hu;
    return 0;
}