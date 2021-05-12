#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int v[5001];

signed main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int n;
    cin >> n;
    memset(v, 0, sizeof v);
    rep(i, 0, n)
    {
        int a;
        cin >> a;
        v[a]++;
    }
    int res = LLONG_MAX;
    rep(m, 1, 5001)
    {
        int rem = 0;
        for (int k = 1; k < m; k++)
            rem += v[k];
        for (int k = 2*m+1; k < 5001; k++)
            rem += v[k];
        res = min(res, rem);
    }
    cout << res;
	return 0;
}