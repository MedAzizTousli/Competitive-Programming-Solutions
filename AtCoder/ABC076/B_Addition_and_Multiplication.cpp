#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = 1;
    rep(i, 0, n)
    {
        int minn = min(ans*2, ans+k);
        ans = minn;
    }
    cout << ans;
    return 0;
}