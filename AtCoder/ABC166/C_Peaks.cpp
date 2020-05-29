#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> h(n+1);
    rep(i, 1, n+1)
        cin >> h[i];
    vector<bool> v(n+1, true);
    rep(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        if (h[a] > h[b])
            v[b] = false;
        if (h[b] > h[a])
            v[a] = false;
        if (h[b] == h[a])
        {
            v[a] = false;
            v[b] = false;
        }
    }
    int res = 0;
    rep(i, 1, n+1)
        res += v[i];
    cout << res;
    return 0;
}