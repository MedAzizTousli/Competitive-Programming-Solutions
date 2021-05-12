#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    cout.precision(10);
	int n; cin >> n;
    vector<double> x(n);
    rep(i, 0, n)
        cin >> x[i];
	int m; cin >> m;
    vector<double> y(m);
    rep(i, 0, m)
        cin >> y[i];
	int k; cin >> k;
    vector<double> z(k);
    rep(i, 0, k)
        cin >> z[i];
    double a, b;
    cin >> a >> b;
    double r1 = *max_element(all(x));
    double p2 = *min_element(all(z));
    double res = 0;
    rep(i, 0, m)
    {
        double p1 = y[i];
        double t = (p1*r1*r1*b)/(p2*a+b*p1);
        res = max(res, sqrt(t));
    }
    cout << setprecision(10) << res;
	return 0;
}