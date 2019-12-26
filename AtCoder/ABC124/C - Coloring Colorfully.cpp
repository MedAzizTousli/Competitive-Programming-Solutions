#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int n=0;
    for (int i=0; i<s.size()-1; i++)
    {
        if (s[i]==s[i+1] && s[i]=='0')
        {
            s[i+1] = '1';
            n++;
        }
        else if (s[i]==s[i+1] && s[i]=='1')
        {
            s[i+1] = '0';
            n++;
        }
    }
    cout << n;
    return 0;
}