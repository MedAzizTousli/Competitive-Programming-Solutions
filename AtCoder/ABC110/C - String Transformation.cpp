#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s, t;
    cin >> s >> t;
    map<char, int> sm;
    map<char, int> tm;
    for (int i=0; i<s.size(); i++)
        sm[s[i]]++;
    for (int i=0; i<t.size(); i++)
        tm[t[i]]++;
    vector<int> sv;
    vector<int> tv;
    for (auto x:sm)
        sv.push_back(x.second);
    for (auto x:tm)
        tv.push_back(x.second);
    sort(sv.begin(), sv.end());
    sort(tv.begin(), tv.end());
    cout << (sv==tv?"Yes":"No");
    return 0;
}