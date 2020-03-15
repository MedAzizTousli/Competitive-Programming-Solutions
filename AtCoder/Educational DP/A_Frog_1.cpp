#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n+1,0);
    rep(i, 1, n+1)
        cin >> v[i];
    vector<int> dp(n+1,0);
    dp[2] = abs(v[2]-v[1]);
    rep(i, 3, n+1)
    {
        int p1 = dp[i-1] + abs(v[i]-v[i-1]);
        int p2 = dp[i-2] + abs(v[i]-v[i-2]);
        dp[i] = min(p1, p2);
    }
    cout << dp[n];
    return 0;
}