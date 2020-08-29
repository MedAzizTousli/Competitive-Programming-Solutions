#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    int m = 0;
    int total = 0;
    while (1)
    {
        total += 5;
        if (total >= n)
            break;
        total += 1;
        m += 1;
        if (total >= n)
            break;
        total += 1;
        m += 1;
        if (total >= n)
            break;
    }
    total = 0;
    int M = 0;
    while (1)
    {
        total += 1;
        M += 1;
        if (total >= n)
            break;
        total += 1;
        M += 1;
        if (total >= n)
            break;
        total += 5;
        if (total >= n)
            break;
    }
    cout << m << " " << M;
    return 0;
}