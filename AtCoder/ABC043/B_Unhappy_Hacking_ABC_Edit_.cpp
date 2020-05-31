#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string s;
    cin >> s;
    string res = "";
    rep(i, 0, s.size())
    {
        if (s[i] == '0' || s[i] == '1')
            res += s[i];²
        else if (res.size() == 1 || res.size() == 0)
            res = "";
        else
            res = res.substr(0, res.size()-1);
    }
    cout << res;
    return 0;
}