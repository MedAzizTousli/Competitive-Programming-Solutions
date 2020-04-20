#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

ll mod = 1e9 + 7;

ll fact(ll n)
{
    ll res = 1;
    for(ll i = 1; i <=n; ++i)
        res = res * i % mod;
    return res % mod;
}

int main()
{
    ll n, m;
    cin >> n >> m;
    if (abs(n - m) >= 2)
        cout << 0;
    else if (n == m)
        cout << fact(n) * fact(m) * 2 % mod;
    else 
        cout << fact(n) * fact(m) % mod;
    return 0;
}