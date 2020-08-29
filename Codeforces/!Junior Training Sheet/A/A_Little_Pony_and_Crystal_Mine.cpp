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
    int st = n/2;
    int d = 1;
    string s = "";
    rep(i, 1, n+1)
    {
        if (i <= n/2)
        {
            s = string(st, '*') + string(d, 'D') + string(st, '*');
            d+=2;
            st--;
        }
        else if (i > n/2)
        {
            s = string(st, '*') + string(d, 'D') + string(st, '*');
            st++;
            d-=2;
        }
        else 
            s = string(n, 'D');
        cout << s << endl;
    }
    return 0;
}