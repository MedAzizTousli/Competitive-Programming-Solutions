#include <bits/stdc++.h>
#define int long long
#define FLASH                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int n, m;
vector<string> A;
int dx[] = {1, 0, 0, -1};
int dy[] = {0, 1, -1, 0};
int dist[30][30];
bool valid(int x, int y)
{
    return (x >= 1 && x <= n && y >= 1 && y <= m);
}
bool visited[30][30];
int ans;
void bfs(pair<int, int> source)
{
    queue<pair<int, int>> q;
    q.push(source);
    dist[source.first][source.second] = 0;
    visited[source.first][source.second] = true;
    while (!q.empty())
    {
        pair<int, int> v = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int row = v.first + dx[i];
            int col = v.second + dy[i];
            if (valid(row, col) && A[row - 1][col - 1] == '.' && visited[row][col] == false) // '.' = Win ynejem yet7arek | A : 0 -> n-1
            {
                visited[row][col] = true;
                dist[row][col] = dist[v.first][v.second] + 1;
                ans = max(dist[row][col], ans);
                q.push(make_pair(row, col));
            }
        }
    }
}

signed main()
{
    cin >> n >> m;
    int h = n, w = m;
    A.resize(h);
    for (int i = 0; i < h; i++)
        cin >> A[i];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            visited[i][j] = false;
            dist[i][j] = INT_MAX;
        }
    int res = 0;
    rep(i, 1, h + 1)
        rep(j, 1, w + 1)
    {
        if (A[i-1][j-1] == '.')
        {
            bfs({i, j});
            memset(visited, false, sizeof visited);
            res = max(ans, res);
        }
    }
    cout << res;
    return 0;
}