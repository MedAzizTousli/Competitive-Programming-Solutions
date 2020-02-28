#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> p(n+1);
    vector<int> q(n+1);
    vector<int> v(n+1);
    for (int i=1; i<=n; i++)
        cin >> p[i];
    for (int i=1; i<=n; i++)
        cin >> q[i];
    for (int i=1; i<=n; i++)
        v[i] = i;
    int a,b,i=1;
    do
    {
        if (v==p)
            a = i;
        if (v==q)
            b = i;
        i++;
    } while (next_permutation(v.begin()+1,v.end()));
    cout << abs(a-b);
    return 0;
}