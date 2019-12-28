#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n, m;
    cin >> n >> m;
    vector<ll> x(m);
    if (n>m)
    {
        cout << 0;
        return 0;
    }
    for(ll i=0; i<m; i++)
        cin >> x[i];
    sort(x.begin(), x.end());
    vector<ll> y(m-1);
    for (ll i=0; i<m-1; i++)
        y[i] = x[i+1]-x[i];
    sort(y.begin(), y.end());
    ll sum = 0;
    for (ll i=0; i<y.size()-n+1; i++)
        sum += y[i];
    cout << sum;
    return 0;
}