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
    vector<int> v(12);
    rep(i, 0, 12)
        cin >> v[i];
    sort(rbegin(v), rend(v));
    int res = 0;
    int ans = 0;
    int i;
    for (i = 0; i < 12; i++)
    {
        if (res >= n)
            break;
        res += v[i];
        ans++;
    }
    if (i == 12 && res < n)
        cout << -1;
    else 
        cout << ans;
    return 0;
}