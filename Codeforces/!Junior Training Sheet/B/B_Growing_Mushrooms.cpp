#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

bool f(pair<double,int> a, pair<double,int> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    else 
        return a.second > b.second;
}

signed main()
{
	double n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    vector<pair<double, int>> v(n);
    rep(i, 0, n)
    {
        double a, b;
        cin >> a >> b;
        double strat1 = (a * t1) - (a*t1)*k/100.0 + b*t2;
        double strat2 = (b * t1) - (b*t1)*k/100.0 + a*t2;
        double ans = max(strat1, strat2);
        v[i] = {ans, i+1};
    }
    sort(rbegin(v), rend(v), f);
    for (int i = 0; i < n; i++)
        printf("%lld %.2f\n", v[i].second, v[i].first);
	return 0;
}