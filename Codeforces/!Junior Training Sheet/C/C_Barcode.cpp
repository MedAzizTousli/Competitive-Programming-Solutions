// http://c...content-available-to-author-only...s.com/problemset/problem/225/C

#include <bits/stdc++.h>
using namespace std;


#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))
#define clr(v, d)		memset(v, d, sizeof(v))
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	for(int i=(j);i>=(int)(n);--i)
typedef long long ll;

int n, m, x, y;

// n - dotsCount[i] = # of hashes
int dotsCount[1000+9];			// +9 for safety and little thinking
int memo[1000+9][1000+9][3];	// 3: 0 (dots), 1 (hashes), 2 (nothing)

// 0-1 style with restrictions on # of connectives of same value
int solve(int col, int wid, int last)
{
	if(col == m)
	{
		// Make sure invalid states to invalidated
		if(wid < x || wid > y)
			return 100000000;
		return 0;	// we are done
	}

	int &ans = memo[col][wid][last];

	if(ans != -1)
		return ans;

	int dots = 100000000;	// max answer is 1000x1000
	// nothing before or bigger block is valid or old block is allowed
	if(col == 0 || (last == 0 && wid+1 <= y) || (last == 1 && wid >= x))
		dots = n - dotsCount[col] + solve(col+1, (last == 0) ? wid + 1 : 1, 0);

	int hashes = 100000000;
	if(col == 0 || (last == 1 && wid+1 <= y) || (last == 0 && wid >= x))
		hashes = dotsCount[col] + solve(col+1, (last == 1) ? wid + 1 : 1, 1);

	ans = min(dots, hashes);

	return ans;
}
// Your turn: Convert to tabulation style

int main() {

	cin>>n>>m>>x>>y;

	// read and accumulate each column
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			char ch;
			cin>>ch;

			if(ch == '.')
				dotsCount[j]++;
		}
	}

	clr(memo, -1);
	cout<<solve(0, 0, 2);

	return 0;
}
