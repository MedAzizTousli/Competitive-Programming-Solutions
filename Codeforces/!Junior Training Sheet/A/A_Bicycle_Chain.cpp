#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    double n;
    cin >> n;
    vector<double> a(n);
    rep(i, 0, n)
        cin >> a[i];
    double m;
    cin >> m;
    vector<double> b(m);
    rep(i, 0, m)
        cin >> b[i];
    double mx = 0;
    rep(i, 0, n)
        rep(j, 0, m)
        {
            if (b[j]/a[i] == (int)(b[j]/a[i]))
                mx = max(mx, b[j] / a[i]);
        }
    int res = 0;
    rep(i, 0, n)
        rep(j, 0, m)
        {
            if (b[j]/a[i] == (int)(b[j]/a[i]) && b[j]/a[i] == mx)
                res++;
        }
    cout << res;    
    return 0;
}