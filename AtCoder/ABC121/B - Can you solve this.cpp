#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> v(m);
    for (int i=0; i<m; i++)
        cin >> v[i];
    int res = 0;
    for (int i=0; i<n; i++)
    {
        int sum = 0;
        for (int j=0; j<m; j++)
        {
            int a; cin >> a;
            sum += a*v[j];
        }
        if (sum + c > 0)
            res++;
    }
    cout << res;
    return 0;
}