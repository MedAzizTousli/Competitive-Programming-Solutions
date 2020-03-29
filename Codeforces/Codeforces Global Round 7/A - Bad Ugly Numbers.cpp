//https://codeforces.com/contest/1324/problem/B
#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll t;
    cin >> t;
    rep(j, 0, t)
    {
        ll n;
        cin >> n;
        if (n == 1)
            cout << -1 << "\n";
        else 
            cout << string(n-1, '9') << "8\n"; 
    }
    return 0;
}