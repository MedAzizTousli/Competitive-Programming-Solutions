#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int h, a;
    cin >> h >> a;
    if (h%a!=0)
        h = h + (a-h%a);
    cout << h/a;
    return 0;
}