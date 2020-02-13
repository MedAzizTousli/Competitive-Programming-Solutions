#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int res = 700;
    for (int i=0; i<3; i++)
    {
        char c; cin >> c;
        if (c=='o') res+=100;
    }
    cout << res;    
    return 0;
}