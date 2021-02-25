#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	string s, t;
    cin >> s >> t;
    vector<pair<int, int>> v;
    rep(i, 0, t.size())
        rep(j, 0, s.size())
        {
            if (t[i] == s[j])
            {
                int nbT = t.size() - i - 1;
                int nbS = s.size() - j - 1;
                if (i<=j && nbT <= nbS)
                    v.push_back({i,j});
            }
        }
    int res = t.size();
    rep(k, 0, v.size())
    {
        int ans = t.size();
        int i = v[k].first;
        int j = v[k].second;
        int begS = j-i;
        rep(x, begS, begS+t.size())
            if (t[x-begS] == s[x])
                ans--;
        res = min(ans, res);
    }
    cout << res;
	return 0;
}