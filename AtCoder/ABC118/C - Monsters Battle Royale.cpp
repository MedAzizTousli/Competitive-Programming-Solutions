#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, ans;
    cin >> n >> ans;
    for (int i=0; i<n-1; i++)
    {
        int x;
        cin >> x;
        ans = __gcd(ans,x);
    }
    cout << ans;
    return 0;
}