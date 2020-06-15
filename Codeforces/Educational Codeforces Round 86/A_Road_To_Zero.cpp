#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x, y;
        ll a, b;
        cin >> x >> y >> a >> b;
        if (a*2 <= b)
            cout << (ll)(x+y)*a << "\n";
        else 
            cout << (ll) min(x,y)*b + (ll) (max(x,y)-min(x,y))*a << "\n";
    }
    return 0;
}