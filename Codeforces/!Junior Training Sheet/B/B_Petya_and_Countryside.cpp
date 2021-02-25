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
    int cpt = 1;
    int res = 1;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    vector<int> dp1(n);
    vector<int> dp2(n);
    dp1[0] = 1;
    dp2[n-1] = 1;
    rep(i, 1, n)
    {
        if (v[i] >= v[i-1])
            dp1[i] = dp1[i-1]+1;
        else 
            dp1[i] = 1;
    }
    rep(i, n-1, 0)
    {
        if (v[i] >= v[i+1])
            dp2[i] = dp2[i+1]+1;
        else 
            dp2[i] = 1;
    }
    rep(i, 0, n)
        dp1[i] += dp2[i];
    cout << *max_element(begin(dp1), end(dp1)) - 1;
    return 0;
}