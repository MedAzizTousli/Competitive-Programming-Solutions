#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, k;
    cin >> n >> k;
    int res = 0;
    while(n--)
    {
        int a;
        cin >> a;
        string s = to_string(a);
        int tmp = 0;
        rep(i, 0, s.size())
            if (s[i] == '7' || s[i] == '4')
                tmp++;
        if (tmp <= k)
            res++;
    }
    cout << res;    
    return 0;
}