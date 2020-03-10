#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<ll> v;
    for (int i=0; i<n; i++)
    {
        ll a; 
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    if (it - v.begin() == v.size())
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}