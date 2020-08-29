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
    vector<pair<int,int>> v(n);
    rep(i, 0, n)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(rbegin(v), rend(v));
    vector<int> res(n);
    res[v[0].second] = 1;
    rep(i, 1, n)
    {
        if (v[i].first == v[i-1].first)
            res[v[i].second] = res[v[i-1].second];
        else 
            res[v[i].second] = i+1;
    }
    for (auto x:res)
        cout << x << " ";
    return 0;
}