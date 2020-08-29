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
    bool y = true;
    rep(i, s.size(), 0)
    {
        if (i != 0 && s[i] != '0')
            y = false;
        if (i%2==0)
            res++;
    }
    if ((s.size()%2==1 && s[0] == '1' && y == true) || (s.size() == 1 && s[0] == '0') )
        res--;
    cout << res;
    return 0;
}