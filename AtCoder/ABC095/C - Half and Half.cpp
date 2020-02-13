#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    int ans=0;
    while(x!=0 && y!=0)
    {
        int d = min(x,y);
        while(d--)
        {
            ans+=min(a+b,2*c);
            x--; y--;
        }
        while (x!=0)
        {
            ans+=min(a,2*c);
            x--;
        }
        while (y!=0)
        {
            ans+=min(b,2*c);
            y--;
        }
    }
    cout << ans;
    return 0;
}