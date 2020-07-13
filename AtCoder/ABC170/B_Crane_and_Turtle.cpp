#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    bool z = false;
    rep(i, 0, x + 1)
        rep(j, 0, x + 1)
        {
            if (i*2 + j*4 == y && i + j == x && i + j != 0)
                z = true;
        }
    cout << (z?"Yes":"No");
    return 0;
}