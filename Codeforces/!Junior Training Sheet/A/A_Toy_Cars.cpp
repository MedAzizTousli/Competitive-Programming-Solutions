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
    vector<bool> v(n+1, true);
    rep(i, 1, n+1)
        rep(j, 1, n+1)
        {
            int a;
            cin >> a;
            if (a == 1)
                v[i] = false;
            if (a == 2)
                v[j] = false;
            if (a == 3)
                v[j] = false,
                v[i] = false;
        }
    cout << accumulate(begin(v), end(v), 0) - 1 << endl;
    rep(i, 1, n+1)
        if (v[i] == true)
            cout << i << " ";
    return 0;
}