#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n, k, index;
    cin >> n >> k; k--;
    vector <ll> v(n);
    for (ll i=0; i<n; i++)
        cin >> v[i];
    ll m = INT_MAX;
    for (ll i=0; i<v.size()-k; i++)
        m = min(m, v[i+k]-v[i] + min(abs(v[i+k]), abs(v[i])));
    cout << m;
    return 0;
}