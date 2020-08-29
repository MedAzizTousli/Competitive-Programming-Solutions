#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int n = 3;

bool valid(int i, int j)
{
    return (i >= 0 && j >= 0 && i < n && j < n);
}

signed main()
{
    int v[3][3];
    rep(i, 0, 3)
        rep(j, 0, 3)
            cin >> v[i][j];
    int res[3][3];
    memset(res, 0, sizeof res);
    int dx[5] = {0,0,0,1,-1};
    int dy[5] = {0,1,-1,0,0};
    rep(i, 0, 3)
        rep(j, 0, 3)
            rep(k, 0, 5)
            {
                int x = dx[k] + i;
                int y = dy[k] + j;
                if (valid(x, y))
                    res[x][y] += v[i][j];
            }
    rep(i, 0, 3)
    {
        string s =  "";
        rep(j, 0, 3)
        {
            if (res[i][j] % 2 == 0)
                s += "1";
            else 
                s += "0";
        }
        cout << s << endl;
    }
    return 0;
}