#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll q = (n-1) / 11 + 1;
    ll r = n % 11;
    if (r == 0)
        r = 7;
    ll res = q * 2;
    if (r <= 6)
        cout << (ll)res - 1;
    else 
        cout << (ll)res;
    return 0;
}