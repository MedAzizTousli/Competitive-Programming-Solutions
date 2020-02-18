#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a+b>c+d)
        cout << "Left";
    else if (a+b<c+d)
        cout << "Right";
    else 
        cout << "Balanced";    
    return 0;
}