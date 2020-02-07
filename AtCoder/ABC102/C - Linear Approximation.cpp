#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i=0; i<n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a-i-1);
    }
    sort(v.begin(), v.end());
    ll d = n/2;
    ll sum = 0;
    for (ll i=0; i<n; i++)
        sum += abs(v[i]-v[d]);
    cout << sum;
    return 0;
}