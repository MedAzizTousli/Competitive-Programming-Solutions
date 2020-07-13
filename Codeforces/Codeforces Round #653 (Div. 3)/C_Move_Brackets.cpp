#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    FLASH
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int nb1 = 0;
        int nb2 = 0;
        int res = 0;
        rep(i, 0, s.size())
        {
            if (s[i] == '(')
                nb1++;
            if (s[i] == ')' && nb1 > 0)
                nb1--;
            else if (s[i] == ')' && nb1 <= 0)
                res++;
        }
        cout << res;
        cout << "\n";
    }
    return 0;
}