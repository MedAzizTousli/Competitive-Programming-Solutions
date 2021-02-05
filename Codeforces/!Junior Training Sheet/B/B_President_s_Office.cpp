#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int n, m;

bool valid(int i, int j)
{
    return i >= 0 && j >= 0 && i < n && j < m;
}

signed main()
{
    cin >> n >> m;
    char c;
    cin >> c;
    vector<string> v(n);
    rep(i, 0, n)
        cin >> v[i];
    set<char> s;
    rep(i, 0, n)
        rep(j, 0, m)
        {
            if (v[i][j] == c)
            {
                if (valid(i-1, j) && v[i-1][j] != '.' && v[i-1][j] != c)
                    s.insert(v[i-1][j]);
                if (valid(i+1, j) && v[i+1][j] != '.' && v[i+1][j] != c)
                    s.insert(v[i+1][j]);
                if (valid(i, j-1) && v[i][j-1] != '.' && v[i][j-1] != c)
                    s.insert(v[i][j-1]);
                if (valid(i, j+1) && v[i][j+1] != '.' && v[i][j+1] != c)
                    s.insert(v[i][j+1]);
            }
        }
    cout << s.size();
    return 0;
}