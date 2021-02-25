#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int x, k, d;
    cin >> x >> k >> d;
    x = abs(x);
    int div = abs(x / d);
    int mod = x % d;
    int rest = k - div;
    if (rest == 0)
        cout << mod;
    else if (rest > 0)
    {
        if (rest % 2 == 0)
            cout << mod;
        else 
            cout << abs(mod-d);
    }
    else if (rest < 0)
        cout << abs(rest) * d + mod;
	return 0;
}