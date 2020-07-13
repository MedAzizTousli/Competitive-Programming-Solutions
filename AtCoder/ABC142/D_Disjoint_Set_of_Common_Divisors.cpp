#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

vector<ll> trial_division(ll n)
{
    vector<ll> factorization;
    while (n % 2 == 0)
    {
        factorization.push_back(2);
        n /= 2;
    }
    for (ll d = 3; d * d <= n; d += 2)
    {
        while (n % d == 0)
        {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}

int main()
{
    ll a,b;
    cin >> a >> b;
    vector<ll> v1 = trial_division(a);
    vector<ll> v2 = trial_division(b);
    map<ll, int> mp1;
    map<ll, int> mp2;
    map<ll, int> mp;
    for (auto x:v1)
        mp1[x]++;
    for (auto x:v2)
        mp2[x]++;
    int res = 0;
    for (auto x:mp1)
        if (mp2[x.first] != 0)
            res++;
    cout << res + 1;
    return 0;
}