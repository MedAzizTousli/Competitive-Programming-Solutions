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
    vector<int> v(m+1);
    rep(i, 1, m+1)
        cin >> v[i];
    sort(begin(v), end(v));
    int k = n;
    rep(i, 1, m)
    {
        if (v[i+1]-v[i] == 1)
            continue;
        k = min(k, v[i+1]-v[i]-1);
    }
    if (v[1] != 1)
        k = min(k, v[1]-1);
    if (v[m] != n)  
        k = min(k, n-v[m]);
    if (k == 0)
        return cout << 0, 0;
    if (m == 0)
        return cout << 1, 0;
    int res = 0;
    int nb;
    rep(i, 1, m)
    {
        nb = v[i+1]-v[i]-1;
        res += nb/k + (nb%k==0?0:1);
    }
    if (v[1] != 1)
    {
        nb = v[1]-1;
        res += nb/k + (nb%k==0?0:1);
    }
    if (v[m] != n)
    {
        nb = n-v[m];
        res += nb/k + (nb%k==0?0:1);
    }
    cout << res;
	return 0;
}