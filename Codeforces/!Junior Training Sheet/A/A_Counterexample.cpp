#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int l, r;
    cin >> l >> r;
    bool res = false;
    int i0, j0, k0;
    for (int i = l; i <= r; i++)
        for (int j = i+1; j <= r; j++)
            for (int k = j+1; k <= r; k++)
                if (__gcd(i, j) == 1 && __gcd(j,k) == 1 && __gcd(i,k) != 1)
                {
                    res = true;
                    i0 = i;
                    j0 = j;
                    k0 = k;
                }
    if (res == true)
        cout << i0 << " " << j0 << " " << k0;
    else 
        cout << -1;
    return 0;
}