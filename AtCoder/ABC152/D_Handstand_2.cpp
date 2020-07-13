#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    int v[10][10];
    memset(v, 0, sizeof v); // Arrays
    int res = 0;
    map<int, bool> mp;
    rep(i, 1, n + 1)
    {
        string s = to_string(i);
        string t = s;
        int l = s.size()-1;
        int p = s[0] - '0';
        int d = s[l] - '0';
        v[p][d]++;
    }
    rep(i, 1, 10)
        rep(j, 1, 10)
            res += v[i][j] * v[j][i];
    cout << res;
    return 0;
}