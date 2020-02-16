#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n, m;
    cin >> n >> m;
    if (n==1 && m==1)
        cout << 1;
    else if (n==1 && m!=1)
        cout << m-2;
    else if (n!=1 && m==1)
        cout << n-2;
    else 
        cout << (n-2)*(m-2);  
    return 0;
}