#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, sum=0, m=0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        int p;
        cin >> p;
        m = max(m,p);
        sum += p;
    }
    cout << sum - m/2;
    return 0;
}