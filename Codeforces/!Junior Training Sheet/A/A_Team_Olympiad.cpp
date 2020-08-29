#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int t;
    cin >> t;
    map<int, int> mp;
    map<int, vector<int>> v;
    rep(i, 1, t+1)
    {
        int a;
        cin >> a;
        mp[a]++;
        v[a].push_back(i);
    }
    int x = min({mp[1], mp[2], mp[3]});
    cout << x << endl;
    rep(i, 0, x)
        cout << v[1][i] << " " << v[2][i] << " " << v[3][i] << endl;
    return 0;
}