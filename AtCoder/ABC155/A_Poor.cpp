#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a==b && a!=c)
        cout << "Yes";
    else if (a==c && a!=b)
        cout << "Yes";
    else if (b==c && a!=b)
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}