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
    int res = LLONG_MAX;
    rep(i, 1, n-1)
    {
        int tmp = 0;
        rep(j, 0, n-1)
        {
            if (j == i)
                tmp = max(tmp, v[j+1]-v[j-1]);
            else 
                tmp = max(tmp, v[j+1]-v[j]);
        }
        res = min(tmp, res);
    }
    cout << res;
    return 0;
}