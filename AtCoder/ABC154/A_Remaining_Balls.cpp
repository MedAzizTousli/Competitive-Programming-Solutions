#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s, t, u;
    int a, b;
    cin >> s >> t >> a >> b >> u;
    if (s==u)
        cout << a-1 << " " << b;
    else 
        cout << a << " " << b-1;
    return 0;
}