#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n, Y;
    cin >> n >> Y;
    bool a = false;
    for (int i=0; i<=n; i++)
        for (int j=i; j<=n; j++)
        {
            int x = i;
            int y = j-i;
            int z = n-j;
            if (x*10000+y*5000+z*1000==Y)
            {
                cout << x << " " << y << " " << z;
                a = true;
                return 0;
            }
        }
    if (a == false)
        cout << "-1 -1 -1";
    return 0;
}