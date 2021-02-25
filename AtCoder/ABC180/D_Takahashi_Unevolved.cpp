#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int x, y, a, b;
    cin >> x >> y >> a >> b;
    int ans = 0;
    while ((double)x*a <= 1e18 && x*a<y && x*a<=x+b)
    {
        x *= a;
        ans++;
    }
    cout << ans + (y-1-x)/b;
	return 0;
}
