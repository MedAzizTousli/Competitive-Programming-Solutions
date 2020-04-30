#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    ll res = 0;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    rep(i, 1, n)
    {
        int a = max(0, v[i] + v[i-1] - x);
        res += a;
        v[i] = max(0, v[i] - a);
    }
    cout << res;
    return 0;
}