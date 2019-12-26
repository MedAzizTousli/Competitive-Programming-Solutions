#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(a+b,min(b+c,a+c));
    return 0;
}