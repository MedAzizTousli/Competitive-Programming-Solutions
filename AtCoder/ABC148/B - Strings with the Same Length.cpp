#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    string q = "";
    for (int i=0; i<n; i++)
        q=q+s[i]+t[i];
    cout << q;
    return 0;
}