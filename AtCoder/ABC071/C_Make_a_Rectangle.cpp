#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    while (n--)
    {
        ll a;
        cin >> a;
        mp[a]++;
    }
    ll W = 0, H = 0;
    for (auto it = rbegin(mp); it != rend(mp); it++)
    {
        ll a = it->first;
        ll ca = it->second;
        if (ca >= 4 && W == 0)
        {
            W = a;
            H = a;
            break;
        }
        if (ca >= 2 && W == 0)
        {
            W = a;
            continue;
        }
        if (ca >= 2 && W != 0)
        {
            H = a;
            break;
        }
    }
    cout << H * W;
    return 0;
}