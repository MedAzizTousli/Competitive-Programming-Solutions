#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n,m,x;
    cin >> n >> m >> x;
    int sum=0;
    for (int i=0; i<m; i++)
    {
        int a;
        cin >> a;
        if (a<x)
            sum++;
    }
    cout << min(sum,m-sum);    
    return 0;
}