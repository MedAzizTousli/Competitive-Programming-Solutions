#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    rep(i, 1, 6)
        rep(j, 1, m+1)
        {
            if ((i + j) % 5 == 0)
                mp[i]++;
        }
    mp[0] = mp[5];
    int res = 0;
    rep(i, 1, n+1)
        res += mp[i%5];
    cout << res;
    return 0;
}