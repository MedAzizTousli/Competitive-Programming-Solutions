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
    int n;
    cin >> n;
    string res = string(101, 'z');
    rep(i, 0, n)
    {
        string t;
        cin >> t;
        string t0 = t.substr(0, s.size());
        if (t0 == s && t < res)
            res = t;
    }
    if (res == string(101, 'z'))
        cout << s;
    else 
        cout << res;
    return 0;
}