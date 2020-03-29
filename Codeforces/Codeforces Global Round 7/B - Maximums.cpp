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
    int n;
    cin >> n;
    vector<int> b(n);
    cin >> b[0];
    int a = b[0];
    cout << a << " ";
    int maxi = a;
    rep(i, 1, n)
    {
        cin >> b[i];
        a = max(0, b[i] + maxi);
        cout << a << " ";
        maxi = max(a, maxi);
    }
    return 0;
}