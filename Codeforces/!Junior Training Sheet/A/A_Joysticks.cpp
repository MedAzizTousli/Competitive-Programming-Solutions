#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int a, b;
    cin >> a >> b;
    int t = 0;
    if (a == 1 && b == 1)
        cout << 0;
    else 
    {
        while (true)
        {
            int x = min(a, b);
            int y = max(a, b);
            t++;
            x++;
            y-=2;
            if (y <= 0)
                break;
            a = x;
            b = y;
        }
        cout << t;
    }
    return 0;
}