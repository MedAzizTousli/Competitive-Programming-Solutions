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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        vector<ll> pref(2*k+2, 0);
        rep(i, 0, n)
            cin >> v[i];
        vector<pair<ll, ll>> v2;
        rep(i, 0, n/2)
            v2.push_back({min(v[i], v[n-i-1]), max(v[i], v[n-i-1])});
        map<ll, ll> mp;
        for (auto it:v2)
        {
            mp[it.first+it.second]++;
            ll l = it.first + 1;
            ll r = it.second + k;
            pref[l]++;
            pref[r+1]--;
        }
        rep(i, 2, 2*k+2)
            pref[i] += pref[i-1];
        ll res = n;
        rep(x, 2, 2*k+1)
        {
            ll ct0 = mp[x];
            ll ct1 = pref[x] - ct0;
            ll ct2 = (n/2) - ct0 - ct1;
            res = min(res, ct1 + ct2*2);
        }
        cout << res << endl;
    }
    return 0;
}