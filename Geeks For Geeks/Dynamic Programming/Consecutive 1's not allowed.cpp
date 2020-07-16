#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int m = 1e9+7;
        vector<int> dp0(n,1);
        vector<int> dp1(n,1);
        rep(i, 1, n)
        {
            dp0[i] = (dp0[i-1] + dp1[i-1]) % m;
            dp1[i] = dp0[i-1];
        }
        cout << (dp0[n-1] + dp1[n-1]) % m<< endl;
    }
    return 0;
}