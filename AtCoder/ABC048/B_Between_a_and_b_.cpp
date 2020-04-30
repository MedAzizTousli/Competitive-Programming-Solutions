#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll a, b, x;
    cin >> a >> b >> x;
    if (b == 0 && a == 0)
        cout << 1;
    else if (a == 0)
        cout << b/x + 1;
    else 
        cout << b/x - (a-1)/x;
    return 0;
}