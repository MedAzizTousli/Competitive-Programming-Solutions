#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a, b;
    cin >> a >> b;
    for (int i=1; i<=3; i++)
    {
        if (i!=a && i!=b)
            cout << i;
    }
    return 0;
}