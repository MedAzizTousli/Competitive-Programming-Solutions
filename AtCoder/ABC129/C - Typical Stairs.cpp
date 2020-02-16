#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main() 
{
    ll n, m;
    cin >> n >> m;
    vector<ll> dp(n+1,0);
    for (ll i=0; i<m; i++)
    {
        ll a;
        cin >> a;
        dp[a] = -1;
    }
    dp[0] = 1;
    if (dp[1] == 0)
        dp[1] = 1;
    else 
        dp[1] = 0;
    for (ll i=2; i<=n; i++)
    {
        if (dp[i] != -1)
            dp[i] = dp[i-1] + dp[i-2] % MOD;  
        else 
            dp[i] = 0;
    }
    cout << dp[n] % MOD;
    return 0;
}