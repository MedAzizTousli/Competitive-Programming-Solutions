#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int h,w;
vector <string> A;
int dx[] = {1,0,0,-1,1,1,-1,-1,-2,-2,-2,-2,-2,-1,0,1,2,-1,0,1,2,2,2,2};
int dy[] = {0,1,-1,0,1,-1,1,-1,-2,-1,0,1,2,-2,-2,-2,-2,2,2,2,2,-1,0,1};

bool valid(int x,int y)
{
    return (x>=1 && x<=h && y>=1 && y<=w && A[x-1][y-1] == '.');
}

vector<vector<int>> price(1001, vector<int>(1001, 1e9));

void bfs(pair<int,int> source, int DX, int DY)
{
    deque <pair<int,int> >q;
    q.push_front(source);
    price[source.first][source.second] = 0;
    while(!q.empty())
    {
        pair<int,int> v=q.front();
        int curX = v.first;
        int curY = v.second;
        q.pop_front();
        for (int i=0;i<4;i++)
        {
            int row=v.first+dx[i];
            int col=v.second+dy[i];
            if (valid(row,col) && price[row][col] > price[v.first][v.second])
            {
                price[row][col] = price[v.first][v.second];
                q.push_front(make_pair(row,col));
            }
        }
        for (int i=4;i<24;i++)
        {
            int row=v.first+dx[i];
            int col=v.second+dy[i];
            if (valid(row, col) && price[row][col] > price[v.first][v.second] + 1)
            {
                price[row][col] = price[v.first][v.second] + 1;
                q.push_back(make_pair(row,col));
            }
        }
    }
    cout << (price[DX][DY]==1e9?-1:price[DX][DY]);
}

signed main()
{
    cin >> h >> w;
    int cx, cy, DX, DY;
    cin >> cx >> cy >> DX >> DY;
    A.resize(h);
    rep(i, 0, h)
        cin >> A[i];
    bfs({cx, cy}, DX, DY);
	return 0;
}