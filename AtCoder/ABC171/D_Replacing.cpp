#include <bits/stdc++.h>
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    rep(i, 0, n)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll sum = accumulate(begin(v), end(v), 0LL);
    ll q;
    cin >> q;
    while(q--)
    {
        ll b, c;
        cin >> b >> c;
        ll cpt = mp[b];
        mp[c] += cpt;
        mp[b] = 0;
        sum -= b * cpt;
        sum += c * cpt;
        cout << sum << endl;
    }
    return 0;
}