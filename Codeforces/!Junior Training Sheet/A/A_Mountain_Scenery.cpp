#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(2*n+1);
    rep(i, 0, 2*n+1)
        cin >> v[i];
    vector<int> res(2*n+1);
    int cnt = 0;
    bool y = false;
    rep(i, 2*n, 1)
    {
        if (v[i]-1 > v[i-1] && v[i]-1 > v[i+1] && y == false)
            cnt++,
            res[i] = v[i]-1;
        else 
            res[i] = v[i];
        if (cnt == k)
            y = true;
    }
    res[0] = v[0];
    res[2*n] = v[2*n];
    rep(i, 0, 2*n+1)
        cout << res[i] << " ";    
    return 0;
}