#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int n;

bool valid(int i, int j)
{
    return (i >= 0 && j >= 0 && i < n && j < n);
}

int dx[4] = {0,0,1,-1,};
int dy[4] = {1,-1,0,0,};

signed main()
{
    cin >> n;
    vector<string> v(n);
    rep(i, 0, n)
        cin >> v[i];
    bool z = true;
    rep(i, 0, n)
        rep(j, 0, n)
        {
            int nb = 0;
            for (int k = 0; k < 4; k++)
            {
                int x = dx[k] + i;
                int y = dy[k] + j;
                if (valid(x, y) && v[x][y] == 'o')
                    nb++;
            }
            if (nb % 2 == 1)
                z = false;
        }
    cout << (z?"YES":"NO");
    return 0;
}