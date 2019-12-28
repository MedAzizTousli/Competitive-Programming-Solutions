#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a, b;
    cin >> a >> b;
    cout << (b%a==0?a+b:b-a);
    return 0;
}