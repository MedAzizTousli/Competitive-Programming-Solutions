#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll,ll>> v;
    ll min = 1000000;
    for (ll i=0; i<n; i++)
    {
        ll a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end());
    ll sum=0, drinks=0;
    for (ll i=0; i<n; i++)
    {
        if (drinks+v[i].second>m)
        {
            ll diff = m-drinks;
            sum += v[i].first * diff;
            break;
        }
        sum += v[i].first * v[i].second;
        drinks += v[i].second;
    }
    cout << sum;
    return 0;
}