#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a,b;
    cin >> a >> b;
    if (a*b%2==1 || a*b*2%2==1 || a*b*3%2==1)
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}