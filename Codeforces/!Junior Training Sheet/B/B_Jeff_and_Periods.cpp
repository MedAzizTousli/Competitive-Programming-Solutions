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
    map<int, vector<int>> mp;
    rep(i, 1, n+1)
    {
        int a;
        cin >> a;
        mp[a].push_back(i);
    }
    vector<pair<int, int>> res;
    for (auto x:mp)
    {
        if (x.second.size() == 1)
            res.push_back({x.first, 0});
        else 
        {
            int cur = x.second[1] - x.second[0];
            bool y = true;
            rep(i, 1, x.second.size()-1)
            {
                if (x.second[i+1] - x.second[i] != cur)
                    y = false;
            }
            if (y)
                res.push_back({x.first, cur});
        }
    }
    cout << res.size() << endl;
    for (auto x:res)
        cout << x.first << " " << x.second << endl;
	return 0;
}