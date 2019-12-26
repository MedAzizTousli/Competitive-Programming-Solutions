#include<bits/stdc++.h>
#include<functional>
#define ll long long
using namespace std;

int main() 
{
    int r,d,x;
    cin >> r >> d >> x;
    for (int i=0; i<10; i++)
    {
        x = x*r-d;
        cout << x << "\n";
    }
    
    return 0;
}