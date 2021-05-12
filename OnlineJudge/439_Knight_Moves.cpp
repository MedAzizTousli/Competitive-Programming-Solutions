#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

bool valid(char c, int x)
{
    return x >= 1 && x <= 8 && c >= 'a' && c <= 'h';
}

signed main()
{
    string start, end;
	while (cin >> start >> end)
    {
        queue<pair<char, int>> q;
        map<pair<char, int>, bool> used;
        map<pair<char,int>, int> d;

        q.push({start[0], start[1] - '0'});
        used[{start[0], start[1] - '0'}] = true;
        d[{start[0], start[1] - '0'}] = 0;

        vector<pair<int, int>> v = {{-1, -2}, {-1, +2}, {-2, -1}, {-2, +1},
        {+1, -2}, {+1, +2}, {+2, -1}, {+2, +1}};

        while (!q.empty()) {
            char c = q.front().first;
            int x = q.front().second;
            q.pop();
            for (auto i:v)
            {
                char nextC = c+i.first;
                int nextX = x+i.second;
                if (valid(nextC, nextX) && used[{nextC, nextX}] == false)
                {
                    q.push({nextC, nextX});
                    used[{nextC, nextX}] = true;
                    d[{nextC, nextX}] = d[{c, x}] + 1;
                }
            }
        }
        printf("To get from %s to %s takes %d knight moves.\n", start.c_str(), end.c_str(), d[{end[0], end[1] - '0'}]);
    }
	return 0;
}