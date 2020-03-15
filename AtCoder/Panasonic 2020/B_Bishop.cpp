#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll h, w;
    cin >> h >> w;
    if (h==1 || w==1)
        return cout << 1, 0;
    ll x = h*w;
    cout << (x%2==0?x/2:x/2+1);
    return 0;
}