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
        vector<int> v(n);
        rep(i,0,n)
            cin >> v[i];
        vector<int> dp(n);
        rep(i, 0, n)
            dp[i] = v[i];
        rep(i,1,n)
            rep(j,0,i)
            {
                if (v[i] > v[j])
                    dp[i] = max(dp[i], dp[j] + v[i]);
            }
        cout << *max_element(begin(dp), end(dp)) << endl;
    }
    return 0;
} 