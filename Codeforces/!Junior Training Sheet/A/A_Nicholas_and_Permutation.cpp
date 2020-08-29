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
    int id1, id2;
    rep(i, 1, n+1)
    {
        int a;
        cin >> a;
        if (a == 1)
            id1 = i;
        if (a == n)
            id2 = i;
    }
    int x = min(id1, id2);
    int y = max(id1, id2);
    cout << n - min(x, n-y+1);
    return 0;
}