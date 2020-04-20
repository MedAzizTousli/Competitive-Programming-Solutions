#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll k, n;
    cin >> k >> n;
    vector<ll> v(n+2);
    rep(i, 1, n+1)
        cin >> v[i];
    if (v[1] == 0)
    {
        v[n+1] = k;
        ll maxi = 0;
        ll sum = 0;
        ll x = 0;
        rep(i, 1, n+1)
        {
            x = abs(v[i+1] - v[i]);
            maxi = max(maxi, x);
            sum += x;
        }
        cout << sum - maxi;
    }
    else 
    {
        v[0] = 0;
        v[n+1] = k;
        ll maxi = 0;
        ll sum = 0;
        ll x = 0;
        rep(i, 0, n+1)
        {
            x = abs(v[i+1] - v[i]);
            maxi = max(maxi, x);
            sum += x;
        }
        maxi = max(k - v[n] + v[1], maxi);
        cout << sum - maxi;
    }
    return 0;
}