#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    rep(i, 0, n)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(begin(v), end(v));
    ll index = 0, res;
    rep(i, 0, n)
    {
        index += v[i].second;
        if (index >= k)
        {
            res = v[i].first;
            break;
        }
    }
    cout << res;
    return 0;
}