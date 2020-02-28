#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    if (k>=n)
        return cout << 0, 0;
    sort(v.begin(), v.end());
    ll sum = 0;
    for (int i=0; i<n-k; i++)
        sum += v[i];
    cout << sum;
    return 0;
}