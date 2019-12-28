#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i=0; i<n; i++)
    {
        int k;
        cin >> k;
        for (int j=0; j<k; j++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
    }
    int sum = 0;
    for (auto x:mp)
    {
        if (x.second == n)
            sum++;
    }
    cout << sum;
    return 0;
}