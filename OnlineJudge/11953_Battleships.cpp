#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int n;
char v[100][100];
bool visited[100][100];

bool valid(int i, int j)
{
    return (i >= 0 && j >= 0 && i < n && j < n);
}

int dx[8] = {0,0,1,-1,1,-1,1,-1};
int dy[8] = {1,-1,0,0,1,-1,-1,1};

void dfs(int i, int j)
{
    if (visited[i][j])
        return;
    visited[i][j] = true;
    for (int k = 0; k < 8; k++)
    {
        int x = dx[k] + i;
        int y = dy[k] + j;
        if (valid(x,y) && !visited[x][y] && (v[x][y] == 'x' || v[x][y] == '@'))
            dfs(x, y);
    }
}

signed main()
{
    int t;
    cin >> t;
    rep(T, 1, t+1)
    {
        cin >> n;
        memset(visited,0,sizeof(visited));
        rep(i, 0, n)
            rep(j, 0, n)
                cin >> v[i][j];
        int res = 0;
        rep(i, 0, n)
            rep(j, 0, n)
                if (!visited[i][j] && v[i][j] == 'x')
                {
                    res++;
                    dfs(i, j);
                }
        cout << "Case " << T << ": " << res << endl;
    }
    return 0;
}