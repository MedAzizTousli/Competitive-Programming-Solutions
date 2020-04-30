#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    rep(i, 0, n)
        cin >> v[i];
    vector<map<char, int>> vmp(n);
    rep(i, 0, n)
        rep(j, 'a', 'z' + 1)
            vmp[i][j] = 0;
    rep(i, 0, n)
        rep(j, 0, v[i].size())
            vmp[i][v[i][j]]++;
    map<char, int> mp;
    rep(i, 'a', 'z' + 1)
        mp[i] = INT_MAX;
    rep(i, 0, n)
        for (auto x:vmp[i])
            mp[x.first] = min(mp[x.first], x.second);
    string res = "";
    for (auto x:mp)
        if (x.second != 0)
            res += string(x.second, x.first);
    cout << res;
    return 0;
}