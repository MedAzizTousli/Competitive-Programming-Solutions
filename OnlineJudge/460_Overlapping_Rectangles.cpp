#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

vector<pair<int, int>> generate(vector<int> a)
{
    vector<pair<int, int>> v;
    int x1 = a[0];
    int y1 = a[1];
    int x2 = a[2];
    int y2 = a[3];
    v.push_back({x1, y1});
    v.push_back({x2, y1});
    v.push_back({x2, y2});
    v.push_back({x1, y2});
    return v;
}

signed main()
{
    int n;
    cin >> n;
    rep(i, 0, n)
    {
        int x1l, y1l, x1r, y1r;
        cin >> x1l >> y1l >> x1r >> y1r;
        int x2l, y2l, x2r, y2r;
        cin >> x2l >> y2l >> x2r >> y2r;
        int xl = max(x1l, x2l);
        int yl = max(y1l, y2l);
        int xr = min(x1r, x2r);
        int yr = min(y1r, y2r);
        if (i > 0)
            cout << endl;
        if (xl < xr && yl < yr)
            cout << xl << " " << yl << " " << xr << " " << yr;
        else 
            cout << "No Overlap";
        cout << endl;
    }
    return 0;
}