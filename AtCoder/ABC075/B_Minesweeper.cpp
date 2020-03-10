#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> v(h+2);
    v[0] = string(w, '.');
    v[h+1] = string(w, '.');
    rep(i, 1, h+1)
    {
        string s;
        cin >> s;
        v[i] = '.' + s + '.';
    }
    rep(i, 1, h+1)
        rep(j, 1, w+1)
        {
            if (v[i][j] == '.')
            {
                int sum = 0;
                if (v[i-1][j-1] == '#') sum++;
                if (v[i-1][j] == '#') sum++;
                if (v[i-1][j+1] == '#') sum++;
                if (v[i+1][j-1] == '#') sum++;
                if (v[i+1][j] == '#') sum++;
                if (v[i+1][j+1] == '#') sum++;
                if (v[i][j-1] == '#') sum++;
                if (v[i][j+1] == '#') sum++;
                v[i][j] = to_string(sum)[0];
            }
        }
    rep(i, 1, h+1)
        cout << v[i].substr(1, w) << endl;
    return 0;
}