#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    string s, t;
    cin >> s >> t;
    int hs, ms, ht, mt;
    hs = (s[0] - '0') * 10 + (s[1] - '0');
    ms = (s[3] - '0') * 10 + (s[4] - '0');
    ht = (t[0] - '0') * 10 + (t[1] - '0');
    mt = (t[3] - '0') * 10 + (t[4] - '0');
    int h, m;
    h = hs - ht;
    m = ms - mt;
    if (m < 0)
    {
        h--;
        m = 60 + m;
    }
    if (h < 0)
        h = 24 + h;
    string res;
    if (h < 10)
        res = "0" + to_string(h);
    else 
        res = to_string(h);
    res += ":";
    if (m < 10)
        res += "0" + to_string(m);
    else 
        res += to_string(m);
    cout << res;
    return 0;
}