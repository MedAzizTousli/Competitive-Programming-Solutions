#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, p0, c0;
        cin >> n >> p0 >> c0;
        bool res = true;
        if (c0 > p0)
            res = false;
        rep(i, 1, n)
        {
            int p, c;
            cin >> p >> c;
            int diffp = p - p0;
            int diffc = c - c0;
            if (diffp < 0 || diffc < 0 || diffc > diffp)
                res = false;
            p0 = p;
            c0 = c;
        }
        cout << (res?"YES":"NO") << "\n";
    }
    return 0;
}