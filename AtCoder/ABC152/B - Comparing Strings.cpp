#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a, b;
    cin >> a >> b;
    string s1 = "", s2 = "";
    for (int i=0; i<a; i++)
        s1+=to_string(b);
    for (int i=0; i<b; i++)
        s2+=to_string(a);
    cout << min(s1,s2);
    return 0;
}