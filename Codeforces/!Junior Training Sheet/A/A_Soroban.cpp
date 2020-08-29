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
    rep(i, s.size(), 0)
    {
        int x = s[i] - '0';
        string s = "";
        if (x >= 5)
        {
            s = "-O|";
            x-=5;
        }
        else 
            s = "O-|";
        string l = string(x, 'O');
        string r = string(4-x, 'O');
        s += l + "-" + r;
        cout << s << endl;
    }
    return 0;
}