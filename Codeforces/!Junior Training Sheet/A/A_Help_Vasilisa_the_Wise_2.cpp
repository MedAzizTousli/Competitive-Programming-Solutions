#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    bool y = false;
    int A, B, C, D;
    rep(a, 1, 10)
        rep(b, 1, 10)
            rep(c, 1, 10)
                rep(d, 1, 10)
                    if (a+b==r1&&c+d==r2&&a+c==c1&&b+d==c2&&a+d==d1&&b+c==d2&&a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
                    {
                        y = true;
                        A=a;
                        B=b;
                        C=c;
                        D=d;
                    }
    if (y)
        cout << A << " " << B << endl << C << " " << D;
    else 
        cout << -1;
    return 0;
}