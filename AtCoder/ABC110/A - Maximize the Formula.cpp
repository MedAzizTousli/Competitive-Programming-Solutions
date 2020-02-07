#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << max(a*10+b+c,max(b*10+a+c,c*10+a+b));
    return 0;
}