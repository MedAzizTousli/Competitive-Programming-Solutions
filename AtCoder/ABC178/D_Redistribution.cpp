#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> dp(2005, 0);
    dp[3] = 1;
    dp[4] = 1;
    dp[5] = 1;
    int M = 1e9+7;
    rep(i, 6, n+1)
    {
        dp[i] = 1;
        rep(j, 3, i-2)
            dp[i] = (dp[i] + dp[j])%M;
    }
    cout << (dp[n]+M)%M;
    return 0;
}