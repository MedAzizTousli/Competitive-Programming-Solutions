#include <bits/stdc++.h>
#define ll long long int
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll x = 1000000000000000000;
    ll res = 1LL;
    bool y = false;
    bool z = false;
    while(n--)
    {
        ll a;
        cin >> a;
        if (a == 0)
            y = true;
        if (res == 0)
        {
            y = true;
            break;
        }
        if (x / res >= a)
            res = res * a;
        else 
            z = true;
    }
    if (y == true)
        cout << 0;
    else if (z == true)
        cout << -1;
    else
        cout << res;
    return 0;
}
// Instead of com