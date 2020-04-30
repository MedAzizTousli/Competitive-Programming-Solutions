#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;
    int res = 0;
    rep(x, 0, k+1)
        rep(y, 0, k+1)
            if (s-x-y >= 0 && s-x-y <= k)
                res++;
    cout << res;
    return 0;
}