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
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i=0; i<n-1; i++)
        sum += v[i];
    cout << (sum>v[n-1]?"Yes":"No");
    return 0;
}