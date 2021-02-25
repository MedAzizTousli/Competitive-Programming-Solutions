#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n, w;
    cin >> n >> w;
    map<int, int> mp;
    vector<int> dp(2e5);
    int maxT = 0;
    rep(i, 0, n)
    {
        int s, t, p;
        cin >> s >> t >> p;
        dp[s] += p;
        dp[t] -= p;
        maxT = max(maxT, t);
    }
    bool res = true;
    rep(i, 1, maxT+1)
        dp[i] += dp[i-1];
    rep(i, 0, maxT+1)
        if (dp[i] > w)
            res = false;
    cout << (res?"Yes":"No");
	return 0;
}