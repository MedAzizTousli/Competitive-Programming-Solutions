#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll h, w;
    cin >> h >> w;
    ll res = LLONG_MAX;
    if ((h * w) % 3 == 0)
        return cout << 0, 0;
    rep(i, 1, h)
    {
        ll s1 = i * w;
        ll rem = h - i;
        ll s2 = (rem / 2) * w;
        ll s3 = (rem - rem / 2) * w;
        res = min(res, max({s1, s2, s3}) - min({s1, s2, s3}));
        s2 = rem * (w / 2);
        s3 = rem * (w - w / 2);
        res = min(res, max({s1, s2, s3}) - min({s1, s2, s3}));
    }
    rep(i, 1, w)
    {
        ll s1 = i * h;
        ll rem = w - i;
        ll s2 = (rem / 2) * h;
        ll s3 = (rem - rem / 2) * h;
        res = min(res, max({s1, s2, s3}) - min({s1, s2, s3}));
        s2 = rem * (h / 2);
        s3 = rem * (h - h / 2);
        res = min(res, max({s1, s2, s3}) - min({s1, s2, s3}));
    }
    cout << res;
    return 0;
}