#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(), v.end());
    vector<int> ans(n);
    for (int i=0; i<n; i++)
    {
        int id = v[i].second;
        int ido = (n-1)/2;
        if (i<n/2)
            ido++;
        ans[id] = v[ido].first;
    }
    for (int i=0; i<n; i++)
        cout << ans[i] << endl;
    return 0;
}