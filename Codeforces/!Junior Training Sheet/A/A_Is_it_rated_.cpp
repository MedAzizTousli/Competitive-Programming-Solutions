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
    vector<int> v(n);
    bool change = false;
    rep(i, 0, n)
    {
        int a, b;
        cin >> a >> b;
        if (a != b)
            change = true;
        v[i] = a;
    }
    vector<int> x = v;
    sort(rbegin(x), rend(x));
    if (change)
        cout << "rated";
    else if (v == x)
        cout << "maybe";
    else 
        cout << "unrated";
    return 0;
}