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
    vector<int> res(n*k+1, 0);
    rep(i, 0, k)
    {
        int a;
        cin >> a;
        res[a] = i+1;
    }
    int curr = 1;
    int x = 0;
    rep(i, 1, n*k+1)
    {
        if (res[i] == 0)
        {
            res[i] = curr;
            x++;   
        }
        if (x == n-1)
        {
            x = 0;
            curr++;
        }
    }
    vector<vector<int>> s(k+1);
    rep(i, 1, n*k+1)
        s[res[i]].push_back(i);
    rep(i, 1, k+1)
    {
        rep(j, 0, n)
            cout << s[i][j] << " ";
        cout << endl;
    }
    return 0;
}