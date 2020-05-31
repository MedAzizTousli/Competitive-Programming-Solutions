#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll x;
    cin >> x;
    ll a = 100;
    rep(i, 1, 10000)
    {
        a = a + a * 0.01;
        if (a >= x)
            return cout << i, 0;
    }
    return 0;
}