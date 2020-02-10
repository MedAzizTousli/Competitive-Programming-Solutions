#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a,b;
    cin >> a >> b;
    int x = b-a, sum=0;
    for (int i=1; i<=x; i++)
        sum += i;
    cout << sum - b;
    return 0;
}
