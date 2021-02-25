#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, k;
    cin >> n >> k;
	vector<int> v(n+1);
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    rep(i, 1, n+1)
        rep(j, 1, n+1)
            cin >> dp[i][j];
    for (int i=2; i<=n; i++)
        v[i] = i;
    int res = 0;
    do
    {
        int curr = dp[1][v[2]];
        rep(i, 2, v.size()-1)
            curr += dp[v[i]][v[i+1]];
        curr += dp[v[n]][1];
        if (curr == k)
            res++;
    } while (next_permutation(v.begin()+2,v.end()));
    cout << res;
	return 0;
}