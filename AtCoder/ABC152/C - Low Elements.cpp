#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n;
    cin >> n;
    ll x;
    cin >> x;
    ll sum = 1;
    for (ll i=1; i<n; i++)
    {
        ll p;
        cin >> p;
        if (p<x)
            sum++;
        x = min(x,p);
    }
    cout << sum;
    return 0;
}