#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int p, n;
    cin >> p >> n;
    int res = -1;
    map<int, bool> mp;
    rep(i, 1, n+1)
    {
        int a;
        cin >> a;
        if (mp[a%p] == true)
        {
            res = i;
            break;
        }
        mp[a%p] = true;
    }
    cout << res;
    return 0;
}