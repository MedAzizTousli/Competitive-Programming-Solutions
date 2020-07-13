#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    map<int, bool> mp;
    rep(i, 0, n)
    {
        int p;
        cin >> p;
        mp[p] = true;
    }
    int res;
    for (int i=x, j=x; ;i++, j--)
    {
        if (mp[j] == false)
        {
            res = j;
            break;
        }
        if (mp[i] == false)
        {
            res = i;
            break;
        }
    }
    cout << res;
    return 0;
}