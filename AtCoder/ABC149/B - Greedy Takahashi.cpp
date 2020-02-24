#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll a,b,k;
    cin >> a >> b >> k;
    ll x = 0;
    if (a-k>=0)
        cout << a-k << " " << b;
    else 
        cout << "0 " << max(x,b+(a-k));    
    return 0;
}