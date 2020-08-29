#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

bool f(pair<int,int> a, pair<int,int> b)
{
    return a.first < b.first;
}

signed main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    rep(i, 0, n)
    {
        int a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }
    sort(begin(v), end(v), f);
    bool y = false;
    rep(i, 0, n-1)
        if (v[i].second > v[i+1].second)
            y = true;
    cout << (y?"Happy Alex":"Poor Alex");
    return 0;
}