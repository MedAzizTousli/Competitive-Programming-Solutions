#include<bits/stdc++.h>
#define ll long long
using namespace std;

int divisors(int x)
{
    int sum = 0;
    for (int i=1; i<=x/2; i++)
        if (x%i==0)
            sum++;
    return sum+1;
}

int main() 
{
    int n, sum=0;
    cin >> n;
    for (int i=1; i<=n; i+=2)
        if (divisors(i) == 8)
            sum++;
    cout << sum;
    return 0;
}