#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    vector<bool> dp(k + 1, false);
    rep(i, 0, k + 1)
        if (!dp[i])
            rep(j, 0, n)
                if (i + v[j] < k + 1)
                    dp[i + v[j]] = true;
    cout << (dp[k] == true?"First":"Second");
    return 0;
}