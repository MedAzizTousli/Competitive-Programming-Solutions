#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 4) --> {1,2,3,4}
// rep(i, 4, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll l0 = 2;
    ll l1 = 1;
    if (n==1)
        return cout << 1, 0;
    ll li;
    rep(i, 2, n+1)
    {
        li = l0 + l1;
        l0 = l1;
        l1 = li;
    }
    cout << li;
    return 0;
}