#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n, m;
    cin >> n >> m;
    vector<bool> v(n+1,false);
    vector<int> pen(n+1, 0);
    ll acc = 0, penal = 0;
    for (ll i=0; i<m; i++)
    {
        ll p; string s;
        cin >> p >> s;
        if (v[p]) continue;
        if (s=="AC")
        {
            v[p] =true;
            acc++;
            penal+=pen[p];
        }
        else 
            pen[p]++;
    }
    cout << acc << " " << penal;
    return 0;
}