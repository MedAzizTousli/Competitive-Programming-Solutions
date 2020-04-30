#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string s;
    cin >> s;
    ll n = s.size();
    vector<ll> dp(n);
    map<ll, ll> mp;
    dp[n-1] = s[n-1] - '0';
    ll ten = 10;
    mp[0] = 1;
    mp[dp[n-1]]++;
    for (ll i = n - 2; i >= 0; i--)
    {
        dp[i] = (dp[i+1] + (s[i] - '0') * ten) % 2019;
        ten = (ten * 10) % 2019;
        mp[dp[i]]++;
    }
    ll ans = 0;
    for (auto x:mp)
        ans += x.second*(x.second-1)/2;
    cout << ans;
    return 0;
}