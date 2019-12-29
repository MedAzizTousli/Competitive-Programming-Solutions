#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, k, res=INT_MAX;
    cin >> n >> k;
    vector<int> x(n);
    for (int i=0; i<n; i++)
        cin >> x[i];
    sort(x.begin(), x.end());
    for (int i=k-1; i<n; i++)
        res = min(res, x[i]-x[i-k+1]);
    cout << res;
    return 0;
}