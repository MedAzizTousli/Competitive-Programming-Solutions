#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    while(cin >> n)
    {
        vector<int> v(n);
        rep(i, 0, n)
            cin >> v[i];
        int q;
        cin >> q;
        rep(i, 0, q)
        {
            int a;
            cin >> a;
            int l = lower_bound (v.begin(), v.end(), a) - v.begin() - 1;
            int u = upper_bound (v.begin(), v.end(), a) - v.begin();
            if (l > 0 && u >= n)
                cout << v[l] << " X";
            else if (l < 0 && u < n)
                cout << "X " << v[u];
            else if (l >= 0 && l < n && u >= 0 && u < n)
                cout << v[l] << " " << v[u];
            else 
                cout << "X X";
            cout << endl;
        }
    }
    return 0;
}