#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    if (n==1)
    {
        int a, b;
        cin >> a >> b;
        cout << a+b;
        return 0;
    }
    for (int i=0; i<2; i++)
        for (int j=0; j<n; j++)
        {
            int a;
            cin >> a;
            v[i].push_back(a);
        }
    int maxx = 0, cnt = 0;
    int sum;
    while ( cnt < n )
    {
        sum = 0;
        for (int j=0; j<n; j++)
        {
            if (j<cnt)
                sum += v[0][j];
            else if (j>cnt)
                sum += v[1][j];
            else 
                sum += v[1][j] + v[0][j];
        }
        cnt++;
        maxx = max(maxx, sum);
    }
    cout << maxx;
    return 0;
}