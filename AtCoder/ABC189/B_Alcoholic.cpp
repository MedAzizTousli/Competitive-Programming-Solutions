#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    // int b = 500;
    // double a = 500.0000000001;
    // cout << (a>b);
	int n, x;
    cin >> n >> x;
    double qt = 0;
    for (int i = 1; i <= n; i++)
    {
        double v, p;
        cin >> v >> p;
        qt += (v*p);
        if (qt > x*100)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
	return 0;
}