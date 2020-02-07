#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s; ll k;
    cin >> s >> k;
    ll i;
    if (k<s.size())
        if (s[k-1] == '1') 
    {
        cout << 1;
        return 0;
    }
    for (i=0; i<s.size(); i++)
    {
        if (s[i] == '1')
            continue;
        else
        {
            cout << s[i];
            return 0;
        }
    }
    cout << 1;
    return 0;
}