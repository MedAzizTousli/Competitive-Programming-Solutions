#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s,t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.rbegin(), t.rend());
    cout << (t>s?"Yes":"No");
    return 0;
}