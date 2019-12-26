#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> w(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    for (int i=0; i<n; i++)
        cin >> w[i];
    int sum = 0;
    for (int i=0; i<n; i++)
        if (v[i]-w[i] > 0)
            sum += v[i]-w[i];
    cout << sum;    
    return 0;
}