#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n,T;
    cin >> n >> T;
    int m = INT_MAX;
    for (int i=0; i<n; i++)
    {
        int c,t;
        cin >> c >> t;
        if (t<=T)
            m=min(m,c);
    }
    cout << (m!=INT_MAX?to_string(m):"TLE");
    return 0;
}