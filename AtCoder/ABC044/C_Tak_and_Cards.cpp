#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n, a;
    cin >> n >> a;
    vector<ll> sup;
    vector<ll> inf;
    ll eq = 0;
    rep(i, 0, n)
    {
        ll x; cin >> x;
        if (x < a)
            inf.push_back(a-x);
        else if (x > a)
            sup.push_back(x-a);
        else 
            eq++;
    }
    if (inf.size() == 0 || sup.size() == 0)
        return cout << (1LL << eq) - 1, 0;
    ll res = (1LL << eq) - 1;
    bool go1[inf.size()][5000];
    ll dp1[inf.size()][5000];
    go1[0][inf[0]] = true;
    dp1[0][inf[0]]++;
    rep(i, 1, inf.size())
    {
        go1[i][inf[i]] = true;
        dp1[i][inf[i]]++;
        rep(j, 1, 2501)
        {
            if (go1[i-1][j] == true)
            {
                go1[i][j] = true;
                dp1[i][j] += dp1[i-1][j];
                go1[i][j + inf[i]] = true;
                dp1[i][j + inf[i]] += dp1[i-1][j];
            }
        }
    }
    bool go2[sup.size()][5000];
    ll dp2[sup.size()][5000];
    go2[0][sup[0]] = true;
    dp2[0][sup[0]]++;
    rep(i, 1, sup.size())
    {
        go2[i][sup[i]] = true;
        dp2[i][sup[i]]++;
        rep(j, 1, 2501)
        {
            if (go2[i-1][j] == true)
            {
                go2[i][j] = true;
                dp2[i][j] += dp2[i-1][j];
                go2[i][j + sup[i]] = true;
                dp2[i][j + sup[i]] += dp2[i-1][j];
            }
        }
    }
    cout << endl;
    ll x = inf.size() - 1;
    ll y = sup.size() - 1;
    rep(j, 1, 2501)
        res += dp1[x][j] * dp2[y][j] * (1LL << eq);
    cout << res;
    return 0;
}