#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int a, b, w;
    cin >> a >> b >> w;
    int m = LLONG_MAX, M = 0LL;
    rep(n, 1LL, 1000001LL)
    {
        if (a*n <= 1000*w && b*n >= 1000*w)
        {
            m = min(m, n);
            M = max(M, n);
        }
    }
    if (M != 0)
        cout << m << " " << M;
    else 
        cout << "UNSATISFIABLE";
	return 0;
}