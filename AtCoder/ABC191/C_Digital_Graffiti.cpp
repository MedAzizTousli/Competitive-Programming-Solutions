#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int h, w;
	cin >> h >> w;
	vector<string> v(h);
	rep(i, 0, h)
		cin >> v[i];
	int res = 0;
	vector<vector<int>> dp(h, vector<int>(w, 0));
	rep(i, 0, h)
	{
		rep(j, 0, w)
		{
			if (v[i][j] == '#')
				dp[i][j] = 1;
		}
	}
	rep(i, 0, h-1)
	{

		rep(j, 0, w-1)
		{
			int x = dp[i][j] + dp[i+1][j] + dp[i][j+1] + dp[i+1][j+1];
			if (x%2==1)
				res++;
		}
	}
	cout << res;
	return 0;
}