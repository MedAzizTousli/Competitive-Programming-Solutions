#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    // Sum of numbers from 1 to n = (n+1)*n/2
    int a,b;
    cin >> a >> b;
    int x = b-a, sum=0;
    for (int i=1; i<=x; i++)
        sum += i;
    cout << sum - b;
    return 0;
}