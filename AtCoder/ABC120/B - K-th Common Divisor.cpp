#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a, b, k;
    cin >> a >> b >> k;
    int d = __gcd(a,b);
    vector<int> v;
    for (int i=1; i<=d/2; i++)
        if (d%i==0)
            v.push_back(i);
    v.push_back(d);
    cout << v[v.size()-k];
    return 0;
}