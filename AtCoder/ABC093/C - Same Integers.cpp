#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v={a,b,c};
    sort(v.begin(), v.end());
    int ans = v[2] - v[1];
    int x = v[2] - (ans + v[0]);
    if (x%2==0)
        ans += x/2;
    else 
        ans += x/2 + 2;
    cout << ans;    
    return 0;
}