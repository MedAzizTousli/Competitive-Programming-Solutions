#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n;
    cin >> n;
    vector<pair<double, double>> v(n);
    rep(i, 0, n)
        cin >> v[i].first >> v[i].second;
    int res = 0;
    rep(i, 0, n-1)
        rep(j, i+1, n)
        {
            if (v[i].first == v[j].first)
                continue;
            double s = (v[i].second - v[j].second) / (v[i].first - v[j].first);
            if (s <= 1 && s >= -1)
                res++;
        }
    cout << res;
	return 0;
}