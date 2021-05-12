#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n, m;
	cin >> n >> m;
	vector<set<int>> adj(n);
	rep(i, 0, m)
	{
		int a, b;
		cin >> a >> b;
		a--; b--; // To have graph indexed from 0
		adj[a].insert(b);
		adj[b].insert(a);
	}
	int res = 0;
	while (1)
	{
		vector<int> v;
		rep(i, 0, n)
			if (adj[i].size() == 1)
				v.push_back(i);

		rep(i, 0, v.size())
		{
			auto it = adj[v[i]].begin();
			adj[v[i]].clear();
			adj[*it].erase(v[i]);
		}
		if (v.size() == 0)
			break;
		else
			res++;
	}
	cout << res;
	return 0;
}