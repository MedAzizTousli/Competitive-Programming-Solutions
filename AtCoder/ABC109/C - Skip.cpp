#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n+1);
    v[0] = x;
    for (int i=1; i<=n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    vector<int> w(n);
    for (int i=0; i<n; i++)
        w[i] = v[i+1]-v[i];
    int g = 0;
    for (int i=0; i<n; i++)
        g = __gcd(g, w[i]);
    cout << g;
    return 0;
}