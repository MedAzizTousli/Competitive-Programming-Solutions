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
    vector<int> v(n+1);
    rep(i, 1, n+1)
        cin >> v[i];
    int m;
    cin >> m;
    rep(i, 0, m)
    {
        int x, y;
        cin >> x >> y;
        if (x != 1 && x != n)
        {
            v[x-1] += y-1;
            v[x+1] += v[x] - y;
        }
        else if (x == 1)
            v[x+1] += v[x] - y;
        else if (x == n)
            v[x-1] += y-1;
        v[x] = 0;
    }
    rep(i, 1, n+1)
        cout << v[i] << endl;
    return 0;
}