#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<double> v(n);
    rep(i, 0, n)
    {
        ll a; 
        cin >> a;
        v[i] = (a*(a+1)/2)/(double)a;
    }
    vector<double> dp(n+1);
    dp[0] = 0;
    rep(i, 1, n + 1)
        dp[i] = dp[i-1] + v[i-1];
    double res = 0;
    for (int i = 1; i + k - 1 <= n; i++)
        res = max(res, dp[i+k-1] - dp[i-1]);
    cout << setprecision(10) << res;    
    return 0;
}