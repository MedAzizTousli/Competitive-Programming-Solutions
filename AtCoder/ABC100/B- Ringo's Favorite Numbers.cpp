#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int d, n;
    cin >> d >> n;
    if (n==100 && d==0)
        cout << 101;    
    else if (n==100 && d==1)
        cout << 10100;
    else if (n==100 && d==2)
        cout << 1010000;
    else
        cout << n*pow(100,d);    
    return 0;
}