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
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    sort(begin(v), end(v));
    cout << 1 << " " << v[0] << endl;
    if (v[n-1] == 0)
    {
        cout << 2 << " " << v[1] << " " << v[2] << " " << endl;
        cout << n-3 << " ";
        rep(i, 3, n)
            cout << v[i] << " ";
    }
    else 
    {
        cout << 1 << " " << v[n-1] << endl;
        cout << n-2 << " ";
        rep(i, 1, n-1)
            cout << v[i] << " ";
    }
    return 0;
}