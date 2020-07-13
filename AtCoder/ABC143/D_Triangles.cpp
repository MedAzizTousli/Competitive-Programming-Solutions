#include <bits/stdc++.h>
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    rep(i, 0, n)
        cin >> v[i];
    sort(begin(v), end(v));
    ll ans = 0;
    rep(mid, n, 0)
        rep(low, mid, 0)
        {
            auto itr = lower_bound(begin(v), end(v), v[low] + v[mid]);
            ll ng = distance(itr, end(v));
            ans += (n - 1 - mid) - ng;
        }
    cout << ans;
    return 0;
}