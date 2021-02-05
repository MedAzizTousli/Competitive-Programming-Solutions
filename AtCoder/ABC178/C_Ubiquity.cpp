#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int M = 1000000007;

int binMod(int a, int b, int mod)
{
    int an = 1;
    while (b != 0)
    {
        if ((b % 2) == 1)
            an = (an * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return an;
}

signed main()
{
    int n;
    cin >> n;
    int x = binMod(10LL, n, M);
    int y = binMod(9LL, n, M);
    int z = binMod(8LL, n, M);
    cout << (M + M + x - 2*y + z) % M;
    return 0;
}