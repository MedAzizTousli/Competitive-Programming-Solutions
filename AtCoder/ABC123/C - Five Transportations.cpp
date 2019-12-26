#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n;
    cin >> n;
    vector <ll> v(5);
    for (int i=0; i<5; i++)
        cin >> v[i];
    ll min = *min_element(v.begin(), v.end());
    cout << (min!=1?5 + (n/min):n+4);
    return 0;
}