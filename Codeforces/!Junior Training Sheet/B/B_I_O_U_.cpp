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
    vector<int> owe(n+1, 0);
    rep(i, 0, m)
    {
        int a, b, c;
        cin >> a >> b >> c;
        owe[a] += c;
        owe[b] -= c;
    }
    int res = 0;
    rep(i, 1, n+1)
        if (owe[i] > 0)
            res += owe[i];
    cout << res;
	return 0;
}