#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> v(h);
    vector<vector<char>> v2(w);
    for (int i=0; i<h; i++)
        for (int j=0; j<w; j++)
        {
            char e; cin >> e;
            v[i].push_back(e);
            v2[j].push_back(e);
        }
    bool y = true;
    for (int i=1; i<h-1; i++)
        for (int j=1; j<w-1; j++)
        {
            if (v[i][j] == '#' &&
            v[i][j+1] == '.' && v[i][j-1] == '.' &&
            v[i-1][j] == '.' && v[i+1][j] == '.')
                y = false;
        }

    for (int i=1; i<h-1; i++)
    {
        if (v[0][i] == '#' && v[0][i-1] == '.' &&
        v[0][i+1] == '.' && v[1][i] =='.')
            y = false;
        if (v[h-1][i] == '#' && v[h-1][i-1] == '.' &&
        v[h-1][i+1] == '.' && v[h-2][i] =='.')
            y = false;
    }
    for (int i=1; i<w-1; i++)
    {
        if (v2[0][i] == '#' && v2[0][i-1] == '.' &&
        v2[0][i+1] == '.' && v2[1][i] =='.')
            y = false;
        if (v2[w-1][i] == '#' && v2[w-1][i-1] == '.' &&
        v2[w-1][i+1] == '.' && v2[w-2][i] =='.')
            y = false;
    }
    if (v[0][0] == '#' && v[0][1] == '.' && v[1][0] == '.')
        y = false;
    if (v[h-1][0] == '#' && v[h-1][1] == '.' && v[h-2][0] == '.')
        y = false;
    if (v2[w-1][0] == '#' && v2[w-1][1] == '.' && v2[w-2][0] == '.')
        y = false;
    if (v[h-1][w-1] == '#' && v[h-1][w-2] == '.' && v[h-2][w-1] == '.')
        y = false;
    cout << (y?"Yes":"No");
    return 0;
}