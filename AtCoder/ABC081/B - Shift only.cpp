#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    bool y = true;
    ll sum = 0;
    while (y)
    {
        for (int i=0; i<n; i++)
            if (v[i]%2==0) v[i] = v[i] / 2;
            else y = false;
        sum++;
    }
    cout << sum-1;
    return 0;
}