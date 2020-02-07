#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    float t,a;
    cin >> n >> t >> a;
    float m=(float)INT_MAX;
    int j=1;
    for (int i=1; i<=n; i++)
    {
        float h;
        cin >> h;
        float z = (float)abs(t-h*0.006-a);
        if (z<m)
        {
            m = z;
            j=i;
        }
    }
    cout << j;
    return 0;
}