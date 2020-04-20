#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll N, T;
    cin >> N >> T;
    ll res = 0;
    ll t; cin >> t;
    rep(i, 1, N)
    {
        ll t2; 
        cin >> t2;
        res += min(T, t2 - t);
        t = t2;
    }
    cout << res + T;
    return 0;
}