#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<pair<int,int>> v(n);
    rep(i, 0, n)
    {
        int a, b;
        cin >> a >> b;
        v[i] = {b, a};
    }
    ll time = 0;
    sort(begin(v), end(v));
    bool y = true;
    rep(i, 0, n)
    {
        time += v[i].second;
        if (time > v[i].first)
            y = false;
    }
    cout << (y?"Yes":"No");    
    return 0;
}