#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;


int binomialCoeffUtil(int n, int k, int **dp)
{
    if (dp[n][k] != -1)
        return dp[n][k];

    if (k == 0)
    {
        dp[n][k] = 1;
        return dp[n][k];
    }

    if (k == n)
    {
        dp[n][k] = 1;
        return dp[n][k];
    }

    dp[n][k] = binomialCoeffUtil(n - 1, k - 1, dp) + binomialCoeffUtil(n - 1, k, dp);

    return dp[n][k];
}

int binomialCoeff(int n, int k)
{
    int **dp;
    dp = new int *[n + 1];

    for (int i = 0; i < (n + 1); i++)
        dp[i] = new int[k + 1];

    for (int i = 0; i < (n + 1); i++)
        for (int j = 0; j < (k + 1); j++)
            dp[i][j] = -1;

    return binomialCoeffUtil(n, k, dp);
}

signed main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;
        int res = binomialCoeff(a, b);
        printf("%lld things taken %lld at a time is %lld exactly.\n", a, b, res);
    }
    return 0;
}