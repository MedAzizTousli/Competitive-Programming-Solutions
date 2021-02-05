#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    int k1, k2; 
    cin >> k1;
    queue<int> a;
    queue<int> b;
    rep(i, 0, k1)
    {
        int x;
        cin >> x;
        a.push(x);
    }
    cin >> k2;
    rep(i, 0, k2)
    {
        int x;
        cin >> x;
        b.push(x);
    }
    int res = 0;
    while(!a.empty() && !b.empty())
    {
        int x = a.front();
        int y = b.front();
        a.pop(); 
        b.pop();
        if (x > y)
        {
            a.push(y);
            a.push(x);
        }
        else 
        {
            b.push(x);
            b.push(y);
        }
        res++;
        if (res >= 1e4)
            break;
    }
    if (res == 1e4)
        cout << -1;
    else 
    {
        cout << res << " ";
        if (a.empty())
            cout << 2 << " ";
        else 
            cout << 1 << " ";
    }
    return 0;
}