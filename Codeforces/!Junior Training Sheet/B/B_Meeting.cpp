#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	double xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    double x1 = min(xa, xb);
    double x2 = max(xa, xb);
    double y1 = min(ya, yb);
    double y2 = max(ya, yb);
    int n;
    cin >> n;
    vector<double> a(n);
    vector<double> b(n);
    vector<double> c(n);
    rep(i, 0, n)
        cin >> a[i] >> b[i] >> c[i];
    int res = 0;
    set<pair<int,int>> s;
    rep(i, x1, x2+1)
        rep(j, 0, n)
        {
            double dist1 = sqrt((i-a[j])*(i-a[j])+(y1-b[j])*(y1-b[j]));
            double dist2 = sqrt((i-a[j])*(i-a[j])+(y2-b[j])*(y2-b[j]));
            if (dist1 <= c[j])
                s.insert({i, y1});
            if (dist2 <= c[j])
                s.insert({i, y2});
        }
    rep(i, y1+1, y2)
        rep(j, 0, n)
        {
            double dist1 = sqrt((x1-a[j])*(x1-a[j])+(i-b[j])*(i-b[j]));
            double dist2 = sqrt((x2-a[j])*(x2-a[j])+(i-b[j])*(i-b[j]));
            if (dist1 <= c[j])
                s.insert({x1, i});
            if (dist2 <= c[j])
                s.insert({x2, i});
        }
    cout << (x2-x1+1)*2 + (y2-y1-1)*2 - s.size();
	return 0;
}