#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, m=0;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            m = max(abs(v[i]-v[j]),m);
    cout << m;
    return 0;
}