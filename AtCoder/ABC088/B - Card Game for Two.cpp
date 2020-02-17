#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    sort(v.rbegin(), v.rend());
    int sum = 0;
    bool y=true;
    for (int i=0; i<n; i++)
    {
        if (y) sum+=v[i], y=false;
        else sum-=v[i], y=true;
    }
    cout << sum;
    return 0;
}