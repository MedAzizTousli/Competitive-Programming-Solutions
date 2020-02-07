#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    bool mp[9][9];
    int n, m;
    cin >> n >> m;
    memset(mp,false,sizeof mp);
    for (int i=0; i<m; i++)
    {
        int a,b;
        cin >> a >> b;
        mp[a][b] = true;
        mp[b][a]=true;
    }
    vector<int> A;
    ll ans=0;
    for (int i=1;i<=n;i++) A.push_back(i);
    do
    {
        bool res=true;
        for (int i=0;i<n-1;i++)
        {
            if (!mp[A[i]][A[i+1]])
                res=false;
        }
        if (res) ans++;
    } while (next_permutation(A.begin()+1,A.end()));
    cout << ans;

    return 0;
}