#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        ll L = (a-b)*n;
        ll R = (a+b)*n;
        if (L <= c+d && R >= c-d)
            cout << "Yes\n";
        else 
            cout << "No\n";
    }
    return 0;
}