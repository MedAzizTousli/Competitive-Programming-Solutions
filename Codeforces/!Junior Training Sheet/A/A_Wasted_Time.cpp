#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

ll pw(ll a, ll n)
{
    ll ans = 1;
    while (n > 0)
    {
        if (n % 2 != 0)
            ans = ans * a;
        a = a * a;
        n = n / 2;
    }
    return ans;
}

signed main()
{
    cout.precision(12);
    int n, k;
    cin >> n >> k;
    int currx, curry;
    cin >> currx >> curry;
    double dist = 0.0;
    rep(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        dist += sqrt(pw(x-currx, 2) + pw(y-curry, 2));
        currx = x;
        curry = y;
    }
    cout << setprecision(12) << dist * k / 50;
    return 0;
}