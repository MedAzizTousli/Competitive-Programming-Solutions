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
    int tmp = 0;
    int res = 0;
    s+="X";
    rep(i, 0, s.size()-1)
    {
        if (s[i] == s[i+1])
        {
            tmp++;
        }
        else 
        {
            res++;
            tmp = 0;
        }
        if (tmp == 5)
        {
            res++;
            tmp = 0;
        }
    }
    cout << res;
    return 0;
}