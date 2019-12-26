#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    // __gcd = pgcd in cpp directement
    // Principe = 
    // calculer gcd ascendant
    // calculer gcd decendant
    // choisir max des gcd i+1 et i-1
    ll n;
    cin >> n;
    vector<ll> v(n+1);
    for (ll i=1; i<=n; i++)
        cin >> v[i];
    vector<ll> g1(n+1,0), g2(n+2,0);
    for (ll i=1; i<=n; i++)
        g1[i] = __gcd(v[i], g1[i-1]);
    for (ll i=n; i>=0; i--)
        g2[i] = __gcd(v[i], g2[i+1]);
    ll ans = 0;
    for (ll i=1; i<=n; i++)
        ans = max(ans, __gcd(g1[i-1], g2[i+1]));
    cout << ans;
    return 0;
}