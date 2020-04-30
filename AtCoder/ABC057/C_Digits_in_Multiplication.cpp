#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n;
    cin >> n;
    int res = INT_MAX;
    rep(i, 1, (int)sqrt(n) + 1)
        if (n % i == 0)
            res = min(res, max((int)floor(log10(i)) + 1, (int)floor(log10(n/i)) + 1));
    cout << res;
    return 0;
}