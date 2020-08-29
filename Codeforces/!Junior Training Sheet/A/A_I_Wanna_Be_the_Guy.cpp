#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, p, q;
    cin >> n >> p;
    vector<bool> v(n+1);
    rep(i, 0, p)
    {
        int a;
        cin >> a;
        v[a] = true;
    }
    cin >> q;
    rep(i, 0, q)
    {
        int a;
        cin >> a;
        v[a] = true;
    }
    rep(i, 1, n+1)
        if (v[i] == false)
            return cout << "Oh, my keyboard!", 0;
    cout << "I become the guy.";
    return 0;
}