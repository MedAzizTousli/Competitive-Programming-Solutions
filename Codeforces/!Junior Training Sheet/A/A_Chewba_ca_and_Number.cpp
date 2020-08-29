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
    string res = "";
    rep(i, 0, s.size())
    {
        int c = s[i] - '0';
        int a = min(c, 9-c);
        if (i == 0 && s[i] == '9')
            res += "9";
        else
            res += to_string(a);
    }
    cout << res;
    return 0;
}