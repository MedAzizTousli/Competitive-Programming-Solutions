#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

const int M=998244353;
long long mod(long long x){
	return ((x%M + M)%M);
}
long long add(long long a, long long b){
	return mod(mod(a)+mod(b));
}
long long mul(long long a, long long b){
	return mod(mod(a)*mod(b));
}
long long mins(long long a, long long b){
	return mod(mod(a)-mod(b));
}

signed main()
{
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> seg(k);
	rep(i, 0, k)
		cin >> seg[i].first >> seg[i].second;
	vector<int> dp(n+1); // jump values i can ddo
	vector<int> psum(n+1); // current nb of ways to reach this block
	psum[1] = 1;
	rep(i, 1, n+1)
	{
		if (i>2)
			psum[i] = add(psum[i], psum[i-1]);
		psum[i] = add(psum[i], dp[i]);
		rep(j, 0, k)
		{
			if (seg[j].first + i <= n)
				dp[seg[j].first+i] = add(psum[i], dp[seg[j].first+i]);
			if (seg[j].second + i+1 <= n)
				dp[seg[j].second+i+1] = mins(dp[seg[j].second+i+1], psum[i]);
		}
	}
	cout << psum[n];
	return 0;
}