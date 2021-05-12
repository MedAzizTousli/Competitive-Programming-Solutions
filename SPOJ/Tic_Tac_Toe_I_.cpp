#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

bool is_win(string config) {

	bool rows = 
		(config[0] != '.' && config[0] == config[1] && config[1] == config[2]) ||
		(config[3] != '.' && config[3] == config[4] && config[4] == config[5]) ||
		(config[6] != '.' && config[6] == config[7] && config[7] == config[8]);

	bool columns =
		(config[0] != '.' && config[0] == config[3] && config[3] == config[6]) ||
		(config[1] != '.' && config[1] == config[4] && config[4] == config[7]) ||
		(config[2] != '.' && config[2] == config[5] && config[5] == config[8]);

	bool diagonals =
		(config[0] != '.' && config[0] == config[4] && config[4] == config[8]) ||
		(config[2] != '.' && config[2] == config[4] && config[4] == config[6]);

	return rows || columns || diagonals;
}

signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string board = "";
        rep(i, 0, 3)
        {
            string row;
            cin >> row;
            board += row;
        }
        string ans = "no";
        string start = ".........";
        queue<pair<string, bool>> q;
        q.push({start, 1});
        while(!q.empty())
        {
            string cur = q.front().first;
            bool player = q.front().second;
            q.pop();
            if (cur == board)
            {
                ans = "yes";
                break;
            }
            if (is_win(cur))
                continue;
            rep(i, 0, 9)
                if (cur[i] == '.')
                {
                    cur[i] = (player?'X':'O');
                    if (cur[i] == board[i])
                        q.push({cur, player^1});
                    cur[i] = '.';
                }
        }
        cout << ans << endl;        
    }
    return 0;
}