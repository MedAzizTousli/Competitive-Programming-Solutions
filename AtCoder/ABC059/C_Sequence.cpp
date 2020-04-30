#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    rep(i, 0, n)
        cin >> v[i];
    ll ans = LLONG_MAX;
    ll res1 = 0, res2 = 0;
    ll som;
    if (v[0] >= 0)
    {
        if (v[0] == 0)
        {
            som = 1;
            res1 = 1;
        }
        else 
            som = v[0];
        rep(i, 1, n)
        {
            som = som + v[i];
            if (i % 2 == 1)
                if (som < 0)
                    continue;
                else
                {
                    res1 += som + 1;
                    som = -1;
                }
            else 
                if (som > 0)
                    continue;
                else 
                {
                    res1 += 1 - som;
                    som = 1;
                }
        }
        res2 = v[0] + 1;
        som = -1;
        rep(i, 1, n)
        {
            som = som + v[i];
            if (i % 2 == 0)
                if (som < 0)
                    continue;
                else
                {
                    res2 += som + 1;
                    som = -1;
                }
            else 
                if (som > 0)
                    continue;
                else 
                {
                    res2 += 1 - som;
                    som = 1;
                }
        }
    }
    if (v[0] == 0)
        ans = min(res1, res2);
    if (v[0] <= 0)
    {
        if (v[0] == 0)
        {
            som = -1;
            res1 = 1;
        }
        else 
            som = v[0];
        rep(i, 1, n)
        {
            som = som + v[i];
            if (i % 2 == 0)
                if (som < 0)
                    continue;
                else
                {
                    res1 += som + 1;
                    som = -1;
                }
            else 
                if (som > 0)
                    continue;
                else 
                {
                    res1 += 1 - som;
                    som = 1;
                }
        }
        res2 = 1 - v[0];
        som = 1;
        rep(i, 1, n)
        {
            som = som + v[i];
            if (i % 2 == 1)
                if (som < 0)
                    continue;
                else
                {
                    res2 += som + 1;
                    som = -1;
                }
            else 
                if (som > 0)
                    continue;
                else 
                {
                    res2 += 1 - som;
                    som = 1;
                }
        }
    }
    if (v[0] == 0)
        cout << min({ans, res1, res2});
    else 
        cout << min(res1, res2);
    return 0;
}