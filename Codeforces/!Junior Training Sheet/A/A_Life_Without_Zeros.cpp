#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int a, b;
    cin >> a >> b;
    int c = a + b;
    string s = to_string(a);
    string t = to_string(b);
    string y = to_string(c);
    string s1 = "";
    rep(i, 0, s.size())
        if (s[i] != '0')
            s1 += string(1, s[i]);
    string t1 = "";
    rep(i, 0, t.size())
        if (t[i] != '0')
            t1 += string(1, t[i]);
    string c1 = "";
    rep(i, 0, y.size())
        if (y[i] != '0')
            c1 += string(1, y[i]);
    a = stoll(s1);
    b = stoll(t1);
    c = stoll(c1);
    cout << (c == a+b?"YES":"NO");
    return 0;
}