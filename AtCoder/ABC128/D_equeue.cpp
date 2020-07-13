#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    int res = 0;
    rep(i, 0, k+1)
        rep(j, 0, k+1-i)
        {
            int z = k-i-j;
            if (i+j>n) continue;
            if (z<0) continue;
            priority_queue<int> q;
            rep(a, 0, i)
                q.push(-v[a]);
            rep(a, 0, j)
                q.push(-v[n-1-a]);
            int now = 0;
            while (now < z && !q.empty())
            {
                int t = q.top();
                if (t < 0)
                    break;
                q.pop();
                now++;
            }
            int tmp = 0;
            while (!q.empty())
            {
                int t = q.top();
                q.pop();
                tmp -= t;
            }
            res = max(tmp, res);
        }
    cout << res;
    return 0;
}