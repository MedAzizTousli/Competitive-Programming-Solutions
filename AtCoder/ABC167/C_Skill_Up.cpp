#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<vector<int>> v(n);
    vector<int> prix(n);
    for (int i=0; i<n; i++)
    {
        cin >> prix[i];
        for (int j=0; j<m; j++)
        {
            int e; cin >> e;
            v[i].push_back(e);
        }
    }
    ll ans = LLONG_MAX;
    for(int mask = 0; mask < (1<<n); mask++)
    {
        vector<bool> active(n, false);
        vector<int> learn(m, 0);
        ll sum = 0;
        for(int i=0; i<n; i++) if(mask & (1<<i))
            active[i] = true;
        for (int i=0; i<n; i++)
        {
            if (active[i] == true)
            {
                sum += prix[i];
                for (int j=0; j<m; j++)
                {
                    learn[j] = learn[j] + v[i][j];
                }
            }
        }
        bool corr = true;
        for (int j=0; j<m; j++)
            if (learn[j] < x)
            {
                corr = false;
                break;
            }
        if (corr == true)
            ans = min(ans, sum);
    }
    if (ans == LLONG_MAX)
        cout << -1;
    else 
        cout << ans;
    return 0;
}