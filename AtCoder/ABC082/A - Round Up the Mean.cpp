#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    
    float a, b;
    cin >> a >> b;
    float x = (a+b)/2;
    if (x==(int)x)
        cout << x;
    else
        cout << (int)x+1;
    return 0;
}