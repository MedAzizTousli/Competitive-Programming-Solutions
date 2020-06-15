#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        rep(i, 0, n)
            cin >> v[i];
        vector<ll> dp(n);
        dp[0] = 0;
        rep(i, 1, n-1)
        {
            if (v[i] > v[i-1] && v[i] > v[i+1])
                dp[i] = dp[i-1] + 1;
            else
                dp[i] = dp[i-1];
        }
        dp[n-1] = dp[n-2];
        ll res = -1, index = 0;
        rep(i, 0, n-k+1)
        {
            if (dp[i+k-2] - dp[i] > res)
            {
                res = dp[i+k-2] - dp[i];
                index = i + 1;
            }
        }
        cout << res + 1 << " " << index << "\n";
    }
    return 0;
}