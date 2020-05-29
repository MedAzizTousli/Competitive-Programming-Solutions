#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int k;
    cin >> k;
    ll res = 0;
    rep(a, 1, k+1)
        rep(b, 1, k+1)
            rep(c, 1, k+1)
                res += __gcd(a, __gcd(b,c));
    cout << res;
    return 0;
}