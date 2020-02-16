#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    int m;
    cin >> m;
    for (int i=0; i<m; i++)
    {
        string s;
        cin >> s;
        mp[s]--;
    }
    int maxx = -INT_MAX;
    for (auto x:mp)
        maxx = max(maxx,x.second);
    cout << (maxx<0?0:maxx);
    return 0;
}