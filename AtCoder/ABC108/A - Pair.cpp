#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int k;
    cin >> k;
    int x = k/2;
    if (k%2!=0)
        x *= (k/2+1);
    else 
        x *= k/2;
    cout << x;
    return 0;
}