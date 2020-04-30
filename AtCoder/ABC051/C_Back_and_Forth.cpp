#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    // Aller 1
    rep(i, sy, ty)
        cout << "U";
    rep(i, sx, tx)
        cout << "R";
    // Retour 1
    cout << "D";
    rep(i, sx+1, tx)
        cout << "L";
    rep(i, sy+1, ty)
        cout << "D";
    cout << "L";
    // Aller 2
    cout << "D";
    cout << "RR";
    rep(i, sy+1, ty)
        cout << "U";
    rep(i, sx+1, tx)
        cout << "R";
    cout << "UU";
    cout << "L";
    // Retour 2
    cout << "U";
    rep(i, sx-1, tx)
        cout << "L";
    rep(i, sy-1, ty)
        cout << "D";
    cout << "R";
    return 0;
}