#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, t;
    cin >> n >> t;
    if (n == 1 & t == 10)
        cout << -1;
    else 
        if (t != 10)
            rep(i, 0, n)
                cout << t;
        else 
        {
            rep(i, 0, n-1)
                cout << 1;
            cout << 0;
        }
    return 0;
}