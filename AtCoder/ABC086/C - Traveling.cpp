#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int t0=0, x0=0, y0=0;
    bool z = true;
    for (int i=0; i<n; i++)
    {
        int t, x, y;
        cin >> t >> x >> y;
        int difft = abs(t-t0);
        int diffx = abs(x-x0);
        int diffy = abs(y-y0);
        int sumdiff = diffx + diffy;
        if (sumdiff > difft)
            z = false;
        if (sumdiff < difft)
        {
            if (difft%2==0 && sumdiff%2==1)
                z = false;
            if (difft%2==1 && sumdiff%2==0)
                z = false;
        }
        t0 = t;
        x0 = x;
        y0 = y;
    }
    cout << (z?"Yes":"No");
    return 0;
}