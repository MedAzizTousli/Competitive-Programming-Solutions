#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> v1(h);
    vector<vector<char>> v2(w);
    for (int i=0; i<h; i++)
    {
        for (int j=0; j<w; j++)
        {
            char x;
            cin >> x;
            v1[i].push_back(x);
            v2[j].push_back(x);
        }
    }
    set<int> s;
    for (int i=0; i<v1.size(); i++)
        if (count(v1[i].begin(), v1[i].end(), '.') == v1[i].size())
        {
            v1.erase(v1.begin() + i);
            i--;
        }
    for (int i=0; i<v2.size(); i++)
        if (count(v2[i].begin(), v2[i].end(), '.') == v2[i].size())
            s.insert(i);
    for (int i=0; i<v1.size(); i++) 
        for (int j=0; j<v1[i].size(); j++)
            if (find(s.begin(), s.end(), j) != s.end())
                v1[i][j] = '?';
    for (int i=0; i<v1.size(); i++) 
    {
        for (int j=0; j<v1[i].size(); j++)
            if (v1[i][j] != '?')
                cout << v1[i][j];
        cout << endl;
    }
    return 0;
}