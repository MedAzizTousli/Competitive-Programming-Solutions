#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, k, m;
    cin >> n >> k >> m;
    int sum = 0;
    for (int i=0; i<n-1; i++)
    {
        int a;
        cin >> a;
        sum += a;
    }
    int ans = n*m - sum;
    cout << (ans>k?-1:max(ans,0));
    return 0;
}
