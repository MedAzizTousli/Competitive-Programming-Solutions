#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

bool f(pair<int,int> a, pair<int,int> b)
{
    if (a.first > b.first)
        return true;
    else 
        if (a.first == b.first)
            if (a.second <= b.second)
                return true;
            else 
                return false;
        else 
            return false;
}

signed main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(n);
    rep(i, 0, n)
    {
        int a, b;
        cin >> a >> b;
        v[i] = {b, a};
    }
    sort(begin(v), end(v), f);
    int ans = 0;
    set<int> s;
    rep(i, 0, m+1)
        s.insert(i);
    rep(i, 0, n)
    {
        auto x = s.lower_bound(v[i].second);
        if (x == s.end())
            continue;
        else 
        {
            s.erase(*x);
            ans += v[i].first;
        }
    }
    cout << ans;
    return 0;
}