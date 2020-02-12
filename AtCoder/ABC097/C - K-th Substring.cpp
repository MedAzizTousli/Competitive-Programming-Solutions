#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s; int k;
    cin >> s >> k;
    set<string> v;
    for (int i=0; i<s.size(); i++)
        for (int j=0; j<6; j++)
            v.insert(s.substr(i,j));
    int i=0;
    string res;
    for (auto x:v)
    {
        i++;
        if (i==k+1)
        {
            res = x;
            break;
        }
    }
    cout << res;
    return 0;
}