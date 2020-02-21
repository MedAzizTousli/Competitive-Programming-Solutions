#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n, k;
    cin >> n >> k;
    ll ans = pow(n/k, 3);
    if (k%2==0)
        ans += pow((n+k/2)/k, 3);
    cout << ans;
    return 0;
}