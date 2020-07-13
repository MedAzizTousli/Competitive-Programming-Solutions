#include <bits/stdc++.h>
#define int long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> A(n);
    vector<int> B(m);
    rep(i, 0, n)
        cin >> A[i];
    rep(i, 0, m)
        cin >> B[i];
    vector<int> a(n+1);
    vector<int> b(m+1);
    a[0] = 0;
    rep(i, 0, n)
        a[i+1] = a[i] + A[i];
    b[0] = 0;
    rep(i, 0, m)
        b[i+1] = b[i] + B[i];
    int ans = 0;
    int j = m;
    rep(i, 0, n + 1)
    {
        if (a[i] > k)
            break;
        while (b[j] > k - a[i])
            j--;
        ans = max(ans, i+j);
    }
    cout << ans;
    return 0;
}