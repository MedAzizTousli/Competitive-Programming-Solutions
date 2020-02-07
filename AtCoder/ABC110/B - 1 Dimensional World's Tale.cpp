#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, m, X, Y;
    cin >> n >> m >> X >> Y;
    int minn = Y, maxx = X;
    while (n--)
    {
        int x; cin >> x;
        maxx = max(x, maxx);
    }
    while (m--)
    {
        int y; cin >> y;
        minn = min(y, minn);
    }
    cout << (maxx<minn?"No War":"War");
    return 0;
}