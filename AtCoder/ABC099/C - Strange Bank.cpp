#include<bits/stdc++.h>
#define ll long long
#define max 1000000
using namespace std;


int main() 
{
    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    int k = 1;
    while (k<=max)
    {
        v1.push_back(k);
        k*=9;
    }
    k = 1;
    while (k<=max)
    {
        v2.push_back(k);
        k*=6;
    }
    sort(v1.rbegin(),v1.rend());
    sort(v2.rbegin(),v2.rend());
    int res = INT_MAX;
    for (int i=0; i<=n; i++)
    {
        int ans=0;
        int a1=i;
        int a2=n-i;
        for (int j=0; j<v1.size(); j++)
        {
            while (a1>=v1[j])
            {
                ans++;
                a1-=v1[j];
            }
        }
        for (int j=0; j<v2.size(); j++)
        {
            while (a2>=v2[j])
            {
                ans++;
                a2-=v2[j];
            }
        }
        res=min(ans,res);
    }
    cout << res;
    return 0;
}