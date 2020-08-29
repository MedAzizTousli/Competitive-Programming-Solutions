#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

// OUTSIDE MAIN
int n, m;
char v[8][8];
bool visited[8][8];

bool valid(int i, int j)
{
    return (i >= 0 && j >= 0 && i < n && j < m);
}

int dx[3] = {0,0,-1};
int dy[3] = {1,-1,0};
string S = "#IEHOVA";

void dfs(int i, int j)
{
    visited[i][j] = true;
    for (int k = 0; k < 3; k++)
    {
        int x = dx[k] + i;
        int y = dy[k] + j;
        if (valid(x,y) && !visited[x][y] && S.find(v[x][y]) != -1)
        {
            if (dx[k] == 0 && dy[k] == 1)
                cout << "right";
            else if (dx[k] == 0 && dy[k] == -1)
                cout << "left";
            else if (dx[k] == -1 && dy[k] == 0)
                cout << "forth";
            if (v[x][y] != '#')
                cout << " ";
            dfs(x, y);
        }
    }
}

signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        memset(visited,0,sizeof(visited));
        rep(i, 0, n)
            rep(j, 0, m)
                cin >> v[i][j];
        int i;
        for (i = 0; i < m; i++)
            if (v[n-1][i] == '@')
                break;
        int start = i;
        dfs(n-1, start);
        cout << endl;
    }
    return 0;
}