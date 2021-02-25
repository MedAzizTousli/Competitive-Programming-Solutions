#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(m);
    rep(i, 0, m)
        cin >> v[i].first >> v[i].second;
    int k;
    cin >> k;
    vector<pair<int, int>> p(k);
    rep(i, 0, k)
        cin >> p[i].first >> p[i].second;
    int maxi = 0;
    for(int mask = 0; mask < (1<<k); mask++)
    {
        vector<bool> ball(n, false);
        int res = 0;
        vector<bool> active(k, false);
        for(int i=0; i<k; i++) if(mask & (1<<i))
        {
            active[i] = true;
        }
        rep(i, 0, k)
            if (active[i] == false)
                ball[p[i].first-1] = true;
            else
                ball[p[i].second-1] = true;
        rep(i, 0, m)
            if (ball[v[i].first-1] && ball[v[i].second-1])
                res++;
        maxi = max(res, maxi);
    }
    cout << maxi;
	return 0;
}