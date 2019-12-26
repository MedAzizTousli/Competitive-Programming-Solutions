#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << (b-a*c>=0?c:b/a);
    return 0;
}