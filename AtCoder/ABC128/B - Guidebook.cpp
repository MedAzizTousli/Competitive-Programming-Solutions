#include<bits/stdc++.h>
#include<functional>
#define ll long long
using namespace std;

auto find(map<int, pair<string, int>> v, string s)
{
    for (auto it=v.rbegin(); it!=v.rend(); ++it)
        if ((it->second).first == s)
            return it->first;
}

int main() 
{
    int n;
    cin >> n;
    map<string, int> mp; 
    map<int, pair<string, int>> v;
    for (int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
        int p;
        cin >> p;
        v[p] = make_pair(s, i);
    }
    vector<int> ord;
    for (auto it=mp.begin(); it!=mp.end(); it++)
    {
        for (int j=0; j<it->second; j++)
        {
            auto index = find(v, it->first);
            ord.push_back(v[index].second);
            v.erase(index);
        }
    }
    for (int i=0; i<n; i++)
        cout << ord[i]+1 << "\n";
    return 0;
}