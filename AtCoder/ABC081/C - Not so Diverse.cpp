#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    map<int,int> mp;
    for (int i=0; i<n; i++)
    {
        int a; cin >> a;
        mp[a]++;
    }
    if (k>=mp.size()) 
        return cout << 0, 0;
    vector<int> v;
    for (auto x:mp)
        v.push_back(x.second);
    sort(v.begin(), v.end());
    int res = mp.size()-k;
    int sum = 0;
    for (int i=0; i<v.size(); i++)
    {
        res--;
        sum += v[i];
        if (res == 0) break;
    }
    cout << sum;
    return 0;
}