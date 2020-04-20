#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
	int n, x, y;
	cin >> n >> x >> y;
	vector<int> res(n + 1, 0);
	rep(i, 1, n + 1)
		rep(j, i + 1, n + 1)
		{
			int z = min(abs(j - i), abs(x - i) + 1 + abs(j - y));
			res[z]++;
		}
	rep(i, 1, n)
		cout << res[i] << endl;
	return 0;
}