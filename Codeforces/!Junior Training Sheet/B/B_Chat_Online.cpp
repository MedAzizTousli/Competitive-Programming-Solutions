#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int p, q, l, r;
    cin >> p >> q >> l >> r;
    vector<pair<int,int>> v1(p);
    vector<pair<int,int>> v2(q);
    rep(i, 0, p)
        cin >> v1[i].first >> v1[i].second;
    rep(i, 0, q)
        cin >> v2[i].first >> v2[i].second;
    int res = 0;
    rep(i, l, r+1)
    {
        bool z = false;
        rep(j, 0, q)
        {
            int x1 = v2[j].first + i;
            int x2 = v2[j].second + i;
            rep(k, 0, p)
            {
                int y1 = v1[k].first;
                int y2 = v1[k].second;
                if (max(x1,y1) <= min(x2,y2))
                    z = true;
            }
        }
        if (z == true)
            res++;
    }
    cout << res;
	return 0;
}