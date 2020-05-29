#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<ll> v(n+1, 0);
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        v[i+1] = v[i] + x;
    }
    ll ans = 0;
    set<ll> s = {0};
    ll end = 0, begin = 0;
    while (begin < n)
    {
        while (end < n && !s.count(v[end+1]))
        {
            end++;
            s.insert(v[end]);
        }
        ans += end - begin;
        s.erase(v[begin]);
        begin++;
    }
    cout << ans;
    return 0;
}