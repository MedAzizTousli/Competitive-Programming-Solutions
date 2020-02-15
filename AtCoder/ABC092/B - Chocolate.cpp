#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, d, x;
    cin >> n >> d >> x;
    int sum=0;
    for (int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        int j=0;
        int res=1;
        while (res<=d)
        {
            sum++;
            j++;
            res=j*a+1;
        }
    }
    cout << sum+x;
    return 0;
}