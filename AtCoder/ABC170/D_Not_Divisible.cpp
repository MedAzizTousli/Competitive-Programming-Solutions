#include <bits/stdc++.h>
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int mx = 0;
    rep(i, 0, n)
    {
        int a;
        cin >> a;
        mp[a]++;
        mx = max(mx, a);
    }
    int N = mx;
    vector<int> dp(N + 1, true);
    for (auto x:mp) {
        int i = x.first;
        if (dp[i] && i + i <= N) {
            for (int j = i + i; j <= N; j += i)
                dp[j] = false;
        }
        if (x.second != 1)
            dp[i] = false;
    }
    int res = 0;
    rep (x, 1, N + 1)
        if (mp[x] >= 1 && dp[x] == true)
            res++;
    cout << res;
    return 0;
}