#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    sort(rbegin(v), rend(v));
    vector<pair<int, int>> mp;
    int res = 0;
    mp.push_back({v[0], 1});
    int it = 0;
    for (int i = 1; i < n; i++)
    {
        mp.push_back({v[i], 2});
        res += mp[it].first;
        mp[it].second--;
        if (mp[it].second == 0)
            it++;
    }
    cout << res;
    return 0;
}