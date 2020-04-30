#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int res = 0, x = 0;
    rep(i, 0, s.size())
    {
        if (s[i] == 'I')
        {
            x++;
            res = max(res, x);
        }
        if (s[i] == 'D')
            x--;
    }
    cout << res;
    return 0;
}