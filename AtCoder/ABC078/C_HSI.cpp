#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 4) --> {1,2,3,4}
// rep(i, 4, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << (1900*m+100*(n-m))*pow(2,m);
    return 0;
}