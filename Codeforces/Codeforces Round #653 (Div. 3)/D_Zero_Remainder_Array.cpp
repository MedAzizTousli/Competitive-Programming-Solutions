#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    FLASH
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        rep(i, 0, n)
        {
            int a;
            cin >> a;
            a = a % k;
            a = (k - a) % k;
            mp[a]++;
        }
        int x = 0;
        for (auto z:mp)
        {
            if (z.first == 0)
                continue;
            x = max(x, z.first + (z.second-1) * k);
        }
        if (mp[0] == n)
            cout << 0;
        else 
            cout << x + 1;
        cout << "\n";
    }
    return 0;
}