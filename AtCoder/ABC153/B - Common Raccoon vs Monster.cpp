#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int h, n;
    cin >> h >> n;
    int sum = 0;
    while (n--)
    {
        int a; cin >> a; 
        sum += a;
    }
    cout << (sum>=h?"Yes":"No");    
    return 0;
}