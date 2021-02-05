#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

double distance(pair<int, int> s, int row, int col)
{
    double r = row + 1;
    double c = col + 1;
    double x = s.first + 1;
    double y = s.second + 1;
    return sqrt((x-r)*(x-r) + (y-c)*(y-c));
}
vector<string> A;

int n,m;
map<char, double> mp;
int dx[] = {1,0,0,-1};
int dy[] = {0,1,-1,0};
int dist[31][31];
bool valid(int x,int y)
{
    return (x>=0 && x<n && y>=0 && y<m);
}
bool visited[31][31];
int ans;
void bfs(pair<int,int> source)
{
    queue <pair<int,int>>q;
    q.push(source);
    char c = A[source.first][source.second];
    visited[source.first][source.second]=true;
    while(!q.empty())
    {
        pair<int,int> v=q.front();
        q.pop();
        for (int i=0;i<4;i++)
        {
            int row=v.first+dx[i];
            int col=v.second+dy[i];
            if (valid(row,col) && visited[row][col]==false)
            { 
                visited[row][col]=true;
                q.push(make_pair(row,col));
                if (A[row][col] == 'S')
                    mp[c] = min(mp[c], distance(source, row, col));
            }
        }
    }
}

signed main()
{
    int x;
    cin >> n >> m >> x;
    A.resize(n);
    rep(i,0,n)
        cin >> A[i];
    int q;
    cin >> q;
    string t;
    cin >> t;
    bool y = false;
    rep(i, 0, n)
        rep(j, 0, m)
            mp[A[i][j]] = (double)LLONG_MAX;
    rep(i, 0, n)
        rep(j, 0, m)
        {
            if (A[i][j] != 'S')
            {
                memset(visited, false, sizeof visited);
                bfs({i, j});
            }
            else 
                y = true;
        }
    int res = 0;
    bool caps = false;
    bool exist = true;
    for (auto z:t)
    {
        if (mp[tolower(z)] == 0)
            exist = false;
        if (mp[tolower(z)] > x && isupper(z))
            res++;
        if (isupper(z))
            caps = true;
    }
    cout << ((caps&&!y) || !exist?-1:res);
    return 0;
}