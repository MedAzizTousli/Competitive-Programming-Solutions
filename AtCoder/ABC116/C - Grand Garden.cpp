#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, a=0, ans=0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        int h;
        cin >> h;
        if (h>a)
            ans += h-a;
        a = h;
    }
    cout << ans;    
    return 0;
}