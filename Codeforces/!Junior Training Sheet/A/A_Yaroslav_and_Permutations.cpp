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
    map<int, int> mp;
    rep(i, 0, n)
    {
        int a;
        cin >> a;
        mp[a]++;
    }
    int res = 0;
    for (auto x:mp)
        res = max(res, x.second);
    // cout << res;
    if ((res <= n/2 && n%2 == 0) || (res <= n/2+1 && n%2==1))
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}