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
    vector<pair<double, double>> v;
    while(n--)
    {
        double x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    bool z = false;
    rep(i, 0, v.size()-2)
        rep(j, i+1, v.size()-1)
            rep(k, j+1, v.size())
            {
                if (v[k].second == v[j].second && v[i].second == v[k].second)
                    z = true;
                else 
                {
                    double z1 = (v[i].first - v[j].first) / (v[i].second - v[j].second);
                    double z2 = (v[i].first - v[k].first) / (v[i].second - v[k].second);
                    double z3 = (v[k].first - v[j].first) / (v[k].second - v[j].second);
                    if (z1 == z2 && z2 == z3)
                        z = true; 
                }
            }
    cout << (z?"Yes":"No");
	return 0;
}