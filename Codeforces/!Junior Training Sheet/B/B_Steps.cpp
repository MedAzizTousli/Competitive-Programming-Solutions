#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n, m;
    cin >> n >> m;
    int x, y;
    cin >> x >> y;
    int k;
    cin >> k;
    int steps = 0;
    while(k--)
    {
        int dx, dy;
        cin >> dx >> dy;
        int a = LLONG_MAX, b = LLONG_MAX;
        if (dx == 0 && dy == 0)
            continue;
        else if (dx == 0 && dy > 0)
            b = (m-y)/dy;
        else if (dy == 0 && dx > 0)
            a = (n-x)/dx;
        else if (dx == 0 && dy < 0)
            b = y/dy + (y%dy == 0 ? 1:0);
        else if (dy == 0 && dx < 0)
            a = x/dx + (x%dx == 0 ? 1:0);
        else if (dx > 0 && dy > 0)
        {
            a = (n-x)/dx;
            b = (m-y)/dy;
        }
        else if (dx > 0 && dy < 0)
        {
            a = (n-x)/dx;
            b = y/dy + (y%dy == 0 ? 1:0);
        }
        else if (dx < 0 && dy > 0)
        {
            a = x/dx + (x%dx == 0 ? 1:0);
            b = (m-y)/dy;
        }
        else if (dx < 0 && dy < 0)
        {
            a = x/dx + (x%dx == 0 ? 1:0);
            b = y/dy + (y%dy == 0 ? 1:0);
        }
        int add = min(abs(a), abs(b));
        steps += add;
        x = x + add*dx;
        y = y + add*dy;
    }
    cout << steps;
	return 0;
}