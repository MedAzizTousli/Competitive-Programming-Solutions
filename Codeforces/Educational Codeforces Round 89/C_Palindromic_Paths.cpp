#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n);
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
            {
                int e; cin >> e;
                v[i].push_back(e);
            }
        vector<int> v1(n+m+10);
        vector<int> v2(n+m+10);
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
            {
                int av = i+j;
                int ii = n - i - 1;
                int jj = m - j - 1;
                if ((n+m) % 2 == 0 && i + j == (n + m - 1) - (i + j + 1))
                    continue;
                if (i + j < (n+m)/2)
                {
                    if (v[i][j] == 0)
                        v1[i+j]++;
                    else 
                        v2[i+j]++;
                }
                else 
                {
                    if (v[i][j] == 0)
                        v1[ii+jj]++;
                    else 
                        v2[ii+jj]++;
                }
            }
        ll res = 0;
        rep(i, 0, n+m)
            res += min(v1[i], v2[i]);
        cout << res << endl;
    }
    return 0;
}