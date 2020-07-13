#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n; ll k;
    cin >> n >> k;
    vector<ll> v(n+1);
    rep(i, 1, n+1)
        cin >> v[i];
    vector<bool> a(n+1, false);
    ll i = 1;
    a[i] = true;
    vector<ll> chain;
    chain.push_back(1);
    ll next;
    while(true)
    {
        next = v[i];
        if (a[next] == true)
            break;
        i = next;
        a[next] = true;
        chain.push_back(next);
    }
    vector<ll> chain2;
    bool y = false;
    rep(i, 0, chain.size())
    {
        if (chain[i] == next)
            y = true;
        if (y == true)
            chain2.push_back(chain[i]);
    }
    if (k < chain.size())
        cout << chain[k];
    else 
    {
        ll rem = chain.size() - chain2.size();
        k = k - rem;
        ll index = k%chain2.size();
        cout << chain2[index];
    }
    return 0;
}