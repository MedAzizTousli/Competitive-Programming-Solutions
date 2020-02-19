#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (ll i=0; i<n; i++)
    {
        ll a;
        cin >> a;
        mp[a]++;
    }
    ll sum = 0;
    for (auto x:mp)
    {
        if (x.second > x.first)
            sum += x.second - x.first;
        if (x.first > x.second) 
            sum += x.second;
    }
    cout << sum;
    return 0;
}