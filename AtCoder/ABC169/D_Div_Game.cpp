#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

map<ll, ll> trial_division(ll n)
{
    map<ll, ll> factorization;
    while (n % 2 == 0)
    {
        factorization[2]++;
        n /= 2;
    }
    for (ll d = 3; d * d <= n; d += 2)
    {
        while (n % d == 0)
        {
            factorization[d]++;
            n /= d;
        }
    }
    if (n > 1)
        factorization[n]++;
    return factorization;
}

int main()
{
    ll n; cin >> n;
    map<ll, ll> mp = trial_division(n);
    ll res = 0;
    bool y = false;
    for (auto x:mp)
    {
        ll nb = 1;
        ll cnt = 0;
        rep(k, 1, x.second + 1)
        {
            cnt += k;
            if (cnt > x.second)
                break;
            nb *= x.first;
            n = n / nb;
            if (n == 0)
            {
                y = true;
                break;
            }
            res++;
        }
        if (y == true)
            break;
    }
    cout << res;
    return 0;
}