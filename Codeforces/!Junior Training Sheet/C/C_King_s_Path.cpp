#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;
    int n;
    cin >> n;

    map<pair<int, int>, bool> mp;
    rep(i, 0, n)
    {
        int r, c1, c2;
        cin >> r >> c1 >> c2;
        rep(j, c1, c2+1)
            mp[{r, j}] = true;
    }

    queue<pair<int,int>> q;
    map<pair<int, int>, bool> used;
    map<pair<int, int>, int> d;
    
    q.push({x0, y0});
    used[{x0, y0}] = true;
    d[{x0, y0}] = 0;

    vector<pair<int, int>> v = {
        {1,1}, {0,1}, {-1,1}, {-1,-1}, {0,-1}, {1,-1}, {1,0}, {-1, 0} 
    };

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x == x1 && y == y1)
            break;
        for (auto i:v)
        {
            int nextX = x + i.first;
            int nextY = y + i.second;
            if (!used[{nextX, nextY}] && mp[{nextX, nextY}])
            {
                used[{nextX, nextY}] = true;
                d[{nextX, nextY}] = d[{x, y}] + 1;
                q.push({nextX, nextY});
            }
        }
    }
    cout << (d[{x1, y1}]==0?-1:d[{x1, y1}]);
	return 0;
}