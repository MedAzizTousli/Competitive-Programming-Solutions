#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> vw(n,0);
    vector<int> ve(n,0);
    string s="";
    int nbe=0;
    for (int i=0; i<n; i++)
    {
        char c;
        cin >> c;
        if (c=='W')
            vw[i+1] = vw[i] + 1;
        if (c=='E')
        {
            vw[i+1] = vw[i];
            nbe++;
        }
        s+=c;
    }
    for (int i=0; i<n; i++)
    {
        if (s[i]=='E')
            nbe--;
        ve[i] = nbe;
    }
    int m = INT_MAX;
    for(int i=0; i<n; i++)
    {
        int x = vw[i]+ve[i];
        m = min(m,x);
    }
    cout << m;
    return 0;
}