#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll res = 0;
    ll mod = 1e9+7;
    rep(i, k, n + 2)
    {
        ll a = (i-1) * i / 2;
        ll b = i * (n + n-i+1) / 2;
        // cout << a << " " << b << endl;
        res += (b - a + 1) % mod;
    }
    cout << res % mod;    
    return 0;
}