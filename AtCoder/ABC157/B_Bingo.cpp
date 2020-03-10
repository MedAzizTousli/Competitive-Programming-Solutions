#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 4) --> {1,2,3,4}
// rep(i, 4, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int a[3][3];
    bool v[3][3] = {false};
    rep(i, 0, 3)
        rep(j, 0, 3)
            cin >> a[i][j];
    int n;
    cin >> n;
    while(n--)
    {
        int b; cin >> b;
        rep(i, 0, 3)
            rep(j, 0, 3)
                if (b == a[i][j])
                    v[i][j] = true;
    }
    bool res = false;
    rep(i, 0, 3)
    {
        if (v[i][0]==v[i][1] && v[i][1]==v[i][2] && v[i][2]==true)
            res = true;
        if (v[0][i]==v[1][i] && v[1][i]==v[2][i] && v[2][i]==true)
            res = true;
    }
    if (v[0][0]==v[1][1] && v[1][1]==v[2][2] && v[2][2]==true)
        res = true;
    if (v[0][2]==v[1][1] && v[1][1]==v[2][0] && v[2][0]==true)
        res = true;
    cout << (res?"Yes":"No");
    return 0;
}