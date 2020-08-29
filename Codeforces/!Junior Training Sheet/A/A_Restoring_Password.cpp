#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    string s;
    cin >> s;
    map<string, int> mp;
    rep(i, 0, 10)
    {
        string a;
        cin >> a;
        mp[a] = i;
    }
    string t = "";
    rep(i, 0, s.size())
    {
        if (i % 10 == 0 && i != 0) 
        {
            cout << mp[t];
            t = "";
        }
        t += string(1, s[i]);
    }
    cout << mp[t];
    return 0;
}