#include <bits/stdc++.h>
#define int long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    rep(i, 1, n + 1)
        cin >> v[i];
    vector<int> res;
    vector<int> cnt(n+1);
    bool y = true;
    for (int i = n; i >= 1; i--)
    {
        int sum = 0LL;
        for (int j = n - n % i; j >= 1 && j != i; j -= i)
            sum += cnt[j];
        if (sum % 2 != v[i])
        {
            res.push_back(i);
            cnt[i] = 1;
        }
    }
    cout << res.size() << endl;
    rep(i, 0, res.size())
        cout << res[i] << endl;
    return 0;
}