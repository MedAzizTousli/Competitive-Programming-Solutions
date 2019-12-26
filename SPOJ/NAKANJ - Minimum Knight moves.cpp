#include<bits/stdc++.h>
using namespace std;

bool used[10][10];
int dist[10][10];
int dx[]={2,-2,1,-1,2,1,-1,-2}, dy[]={1,-1,2,-2,-1,-2,2,1};

bool valid(int x, int y) {
    return (x>=1 && y>=1 && x<=8 && y<=8);
}

void bfs(int x, int y)
{
    queue<pair<int,int>> q;

    q.push(make_pair(x,y));
    used[x][y] = true;
    dist[x][y] = 0;

    while (!q.empty()) {
        pair<int, int> s = q.front();
        q.pop();
        for (int i=0; i<8; i++) {
            int u=s.first + dx[i], v=s.second + dy[i];
            if (valid(u, v) && !used[u][v]) {
                used[u][v] = true;
                q.push(make_pair(u,v));
                dist[u][v] = dist[s.first][s.second] + 1;
            }
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.precision(30);
    
    int T;
    cin >> T;

    while(T--) {
        vector<vector<int>> v;
        string s1, s2;
        cin >> s1;
        cin >> s2;

        int x=s1[0]-'a'+1, y=s1[1]-'0';
        int dx=s2[0]-'a'+1, dy=s2[1]-'0';

        memset(used,false,sizeof used);
        memset(dist,0,sizeof dist);

        bfs(x, y);

        cout << dist[dx][dy] << "\n";
    }

        return 0;
}
