#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int x, y;
    cin >> x >> y;
    if (x>=13)
        cout << y;
    else if (x<6)
        cout << 0;
    else
        cout << y/2;
    return 0;
}