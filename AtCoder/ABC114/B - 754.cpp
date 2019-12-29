#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int res = INT_MAX;
    for (int i=0; i<s.size()-2; i++)
    {
        int x = stoi(s.substr(i,3));
        res = min(res, abs(x-753));
    }
    cout << res;
    return 0;
}