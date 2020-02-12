#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if ((abs(a-b)<=d && abs(b-c)<=d) || (abs(a-c)<=d))
        cout << "Yes";
    else 
        cout << "No"; 
    return 0;
}