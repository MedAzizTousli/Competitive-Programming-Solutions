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
    int x, y;
    cin >> x >> y;
    vector<int> dp(n);
    dp[0] = v[0];
    rep(i, 1, n)
        dp[i] = dp[i-1] + v[i];
    bool res = false;
    int res0 = 0;
    for (int i = 0; i < n; i++)
    {
        int a = dp[i];
        int b = dp[n-1] - dp[i];
        if (a >= x && a <= y && b >= x && b <= y)
        {
            res = true;
            res0 = i+2;
        }
    }
    cout << (res?res0:0);
    return 0;
}