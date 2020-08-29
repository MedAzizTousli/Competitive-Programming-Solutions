#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    vector<bool> v(d+1);
    rep(i, 1, d+1)
    {
        if (i % k == 0)
            v[i] = true;
        if (i % m == 0)
            v[i] = true;
        if (i % l == 0)
            v[i] = true;
        if (i % n == 0)
            v[i] = true;
    }
    cout << accumulate(begin(v), end(v), 0);
    return 0;
}