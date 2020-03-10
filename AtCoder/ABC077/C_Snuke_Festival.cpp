#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<ll> va(n), vb(n), vc(n);
    ll ans = 0;
    rep(i, 0, n)
        cin >> va[i];
    rep(i, 0, n)
        cin >> vb[i];
    rep(i, 0, n)
        cin >> vc[i];
    sort(begin(va), end(va));
    sort(begin(vb), end(vb));
    sort(begin(vc), end(vc));
    rep(i, 0, n)
    {
        ll low1 = lower_bound(va.begin(), va.end(), vb[i]) - va.begin();
        ll low2 = vc.end() - upper_bound(vc.begin(), vc.end(), vb[i]);
        ans += low1 * low2;
    }
    cout << ans;
    return 0;
}