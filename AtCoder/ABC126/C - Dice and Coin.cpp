#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n,k;
    double sum=0;
    cin >> n >> k;
    for (int i=1; i<=n; i++)
    {
        int p=i, j=0;
        while (p<k)
        {
            p*=2;
            j++;
        }
        double x = (double)(pow(0.5,j)/n);
        sum += x;
    }
    printf("%.9f", sum); 
    return 0;
}