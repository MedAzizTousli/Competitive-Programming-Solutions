#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int a;
    cin >> a;
    if (a >= 0)
        cout << a;
    else 
    {
        string s = to_string(a);
        string s1 = "", s2 = "";
        rep(i, 0, s.size())
        {
            if (i == s.size() - 1)
            {
                s1 += string(1, s[i]);
                continue;
            }
            if (i == s.size() - 2)
            {
                s2 += string(1, s[i]);
                continue;
            }
            s1 += string(1, s[i]);
            s2 += string(1, s[i]);
        }
        cout << max(stoll(s1), stoll(s2));
    }
    return 0;
}