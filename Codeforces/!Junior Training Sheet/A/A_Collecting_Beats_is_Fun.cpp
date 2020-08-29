#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int k;
    cin >> k;
    bool y = true;
    map<char, int> mp;
    rep(i, 0, 4)
    {
        rep(j, 0, 4)
        {
            char a;
            cin >> a;
            mp[a]++;
        }
    }
    for (auto x:mp)
        if (x.second > 2*k && x.first != '.')
            y = false;
    cout << (y?"YES":"NO");
    return 0;
}