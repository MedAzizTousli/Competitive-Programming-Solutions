#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int x = n;
    int sum = 0;
    while (x!=0)
    {
        sum+=x%10;
        x/=10;
    }
    cout << (n%sum==0?"Yes":"No");    
    return 0;
}