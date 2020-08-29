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
    int res = n*n/2 + (n%2==1?1:0);
    cout << res << endl;
    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            if ((i%2==0 && j%2==0) || (i%2==1 && j%2==1))
                cout << "C";
            else 
                cout << ".";
        }
        cout << endl;
    }
    return 0;
}