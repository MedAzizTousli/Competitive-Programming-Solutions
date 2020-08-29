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
    int res = 0;
    char curr = 'a';
    rep(i, 0, s.size())
    {
        int x = min(abs(s[i] - curr), 26 - abs(s[i] - curr));
        res += x;
        curr = s[i];
    }
    cout << res;
    return 0;
}