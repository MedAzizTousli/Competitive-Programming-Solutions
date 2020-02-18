#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    long double x, y;
    cin >> x >> y;
    cout << floor(log2(y/x))+1;
    return 0;
}