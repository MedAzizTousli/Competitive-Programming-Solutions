#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    rep(i, 1, n+1)
        cin >> v[i];
    vector<int> u = v;
    sort(all(u));
    vector<int> dpu(n+1);
    dpu[0] = 0;
    rep(i, 1, n+1)
        dpu[i] = dpu[i-1] + u[i];
    vector<int> dpv(n+1);
    dpv[0] = 0;
    rep(i, 1, n+1)
        dpv[i] = dpv[i-1] + v[i];
    int m;
    cin >> m;
    rep(i, 0, m)
    {
        int a, p, q;
        cin >> a >> p >> q;
        p--;
        if (a == 1)
            cout << dpv[q] - dpv[p];
        else 
            cout << dpu[q] - dpu[p];
        cout << endl;
    }
    return 0;
}