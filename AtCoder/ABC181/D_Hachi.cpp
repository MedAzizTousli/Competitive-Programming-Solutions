#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	string s;
    cin >> s;
    map<int, int> mp;
    rep(i, 0, s.size())
    {
        if (mp[s[i]-'0'] == 3)
            continue;
        else 
            mp[s[i]-'0']++;
    }
    bool res = false;
    if (s == "8")
        res = true;
    if (s.size() == 2)
    {
        int nb = stoll(s);
        if (nb % 8 == 0)
            res = true;
        s = string(1, s[1]) + string(1, s[0]);
        nb = stoll(s);
        if (nb % 8 == 0)
            res = true;
    }
    for (auto x:mp)
        for (auto y:mp)
        {
            if (x.first == y.first && x.second == 1)
                continue;
            for (auto z:mp)
            {
                if (x.first == y.first && x.first == z.first && x.second == 2)
                    continue;
                if (x.first == z.first && x.second == 1)
                    continue;
                if (y.first == z.first && y.second == 1)
                    continue;
                int nb = x.first * 100 + y.first * 10 + z.first;
                if (nb % 8 == 0)
                    res = true;
            }
        }
    cout << (res?"Yes":"No");
	return 0;
}