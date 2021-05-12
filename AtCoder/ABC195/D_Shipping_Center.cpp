#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

bool f(pair<int,int> a, pair<int,int> b)
{
    if (a.first != b.first)
        return a.first > b.first;
    else 
        return a.second < b.second;
}

signed main()
{
	int n, m, q;
    cin >> n >> m >> q;
    vector<pair<int,int>> bag(n);
    rep(i, 0, n)
        cin >> bag[i].second >> bag[i].first;
    sort(begin(bag), end(bag), f);
    vector<int> box(m);
    rep(i, 0, m)
        cin >> box[i];
    rep(i, 0, q)
    {
        int l, r;
        cin >> l >> r;
        l--; r--;
        vector<int> v;
        rep(i, 0, l)
            v.push_back(box[i]);
        rep(i, r+1, m)
            v.push_back(box[i]);
        int res = 0;
            
        if (v.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        vector<int> used(v.size(), false);
        rep(i, 0, n)
        {
            int mini = LLONG_MAX;
            int idx = -1;
            rep(j, 0, v.size())
            {
                if (used[j] == false && mini > v[j] && bag[i].second <= v[j])
                {
                    mini = v[j];
                    idx = j;
                }
            }
            if (mini != LLONG_MAX)
            {
                used[idx] = true;
                res += bag[i].first;
            }
        }
        cout << res << endl;
    }
	return 0;
}