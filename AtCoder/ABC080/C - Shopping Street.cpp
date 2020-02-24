#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int f[n][10], p[n][11];
    for (int i=0; i<n; i++)
        for (int j=0; j<10; j++)
            cin >> f[i][j];
    for (int i=0; i<n; i++)
        for (int j=0; j<11; j++)
            cin >> p[i][j];
    int ans = -INT_MAX;
    for(int b = 1; b < (1<<10); b++)
    {
        vector<int> bin(n,0);
        for(int i=0; i<10; i++) if(b & (1<<i))
        {
            for (int j=0; j<n; j++)
                if (f[j][i] == 1)
                    bin[j]++;
        }
        int act = 0;
        for (int i = 0; i < n; i++) {
            act += p[i][bin[i]];
        }
        ans = max(act, ans);
    }
    cout << ans;
    return 0;
}