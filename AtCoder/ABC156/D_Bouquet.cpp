#include <bits/stdc++.h>
#define int long long
#define FLASH                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int modulo(int a, int b, int mod)
{
    int an = 1;
    while (b != 0)
    {
        if ((b % 2) == 1)
        {
            an = (an * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return an;
}

const int BMAX = 200000;
const int MOD = 1000000007;
int inv[200005];

void inv_init()
{
    inv[1] = 1LL;
    for (int i = 2; i <= BMAX; i++)
        inv[i] = MOD - (MOD / i) * inv[MOD % i] % MOD;
    return;
}

int COMB(int n, int a)
{
    if (n < a)
        return 0LL;
    if (n < 0 || a < 0)
        return 0LL;
    int rtn = 1;
    for (int i = 0; i < a; i++)
    {
        rtn *= n - i;
        rtn %= MOD;
        rtn *= inv[i + 1];
        rtn %= MOD;
    }
    return rtn;
}

signed main()
{
    int n, a, b;
    cin >> n >> a >> b;
    inv_init();
    int ans = modulo(2, n, MOD) - 1;
    ans += MOD - COMB(n, b);
    ans += MOD - COMB(n, a);
    ans %= MOD;
    cout << ans;
    return 0;
}