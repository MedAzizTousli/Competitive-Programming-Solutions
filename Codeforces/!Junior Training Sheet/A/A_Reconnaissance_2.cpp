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
    int res = LLONG_MAX;
    int out1, out2;
    rep(i, 0, n-1)
    {
        if (abs(v[i] - v[i+1]) < res)
        {
            res = abs(v[i] - v[i+1]);
            out1 = i+1;
            out2 = i+2;
        }
    }
    if (abs(v[0] - v[n-1]) < res)
    {
        out1 = 1;
        out2 = n;
    }
    cout << out1 << " " << out2;    
    return 0;
}