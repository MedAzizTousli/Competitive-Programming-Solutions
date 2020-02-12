#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    int z = max(a,max(b,c))*pow(2,k);
    cout << a+b+c-max(a,max(b,c))+z;
    return 0;
}