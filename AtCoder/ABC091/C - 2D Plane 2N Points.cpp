#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool f(pair<int,int> a, pair<int,int> b)
{
    return a.first < b.first;
}

int main() 
{
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    map<pair<int,int>,int> mp;
    map<pair<int,int>,int> visited;
    for (int i=0; i<n; i++)
    {
        int a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
        mp[make_pair(a,b)] = 1;
    }
    for (int i=0; i<n; i++)
    {
        int a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
        mp[make_pair(a,b)] = 2;
    }
    sort(v.begin(), v.end(), f);
    int ans = 0;
    for (int i=2*n-1; i>=0; i--)
    {
        int x = 2*n+1;
        int y = 2*n+1;
        bool done = false;
        for (int j=2*n-1; j>i; j--)
        {
            if (mp[v[i]]==1 && mp[v[j]]==2 && !visited[v[j]] && v[j].second<y && v[j].second>v[i].second)
            {
                done = true;
                y = v[j].second;
                x = v[j].first;
            }
        }
        if (done)
        {
            visited[{x,y}] = true;
            ans++;
        }
    }    
    cout << ans;
    return 0;
}