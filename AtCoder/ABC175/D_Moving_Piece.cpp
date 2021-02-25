#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n, k;
    cin >> n >> k;
    vector<int> p(n+1);
    vector<int> c(n+1);
    rep(i, 1, n+1)
        cin >> p[i];
    rep(i, 1, n+1)
        cin >> c[i];
    int ans = -LLONG_MAX;
    rep(i, 1, n+1)
    {
        int curr = i;
        vector<bool> v(n+1, false);
        int nb_steps = 0;
        int res = 0;
        while (v[curr] == false)
        {
            v[curr] = true;
            curr = p[curr];
            res += c[curr];
            ans = max(res, ans);
            nb_steps++;
            if (nb_steps == k)
                break;
        }
        int rest = k % nb_steps;
        int div = k / nb_steps;
        if (res <= 0 || k == nb_steps)
            continue;
        res = res * (div - 1);
        ans = max(res, ans);
        rep(j, 0, rest+nb_steps)
        {
            curr = p[curr];
            res += c[curr];
            ans = max(res, ans);
        }
    }
    cout << ans;
	return 0;
}