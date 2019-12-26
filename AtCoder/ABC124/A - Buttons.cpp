#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a,b;
    cin >> a >> b;
    cout << max(a+b,max(2*a-1,2*b-1));
    return 0;
}