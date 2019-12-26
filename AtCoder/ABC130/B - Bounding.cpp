#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n,x,d,sum=1;
    cin >> n >> x;
    ll p; 
    cin >> p;
    d = 0;
    for (ll i=0; i<n-1; i++)
    {
        d += p;
        if (d<=x) sum++;
        ll l;
        cin >> l;
        p = l;
    }
    d += p;
    if (d<=x) sum++;
    cout << sum;
    return 0;
}
