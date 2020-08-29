#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    ll res = 0;
    while(n--)
    {
        int a;
        cin >> a;
        if (a <= h)
            res++;
        else
            res += 2;
    }
    cout << res;
    return 0;
}