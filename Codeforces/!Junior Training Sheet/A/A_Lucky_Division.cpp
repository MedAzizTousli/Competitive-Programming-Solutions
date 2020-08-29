#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

vector<ll> divisors(ll n) {
    vector<ll> v;
    for (ll d = 1; d * d <= n; d += 1)
    {
        if (n%d==0) 
        {
            if (n/d == d) 
                v.push_back(d); 
            else
            {
                v.push_back(d);
                v.push_back(n/d);
            } 
        }
    }
    return v;
}

bool verify(int n)
{
    string s = to_string(n);
    bool z = true;
    rep(i, 0, s.size())
        if (s[i] != '4' && s[i] != '7')
            z = false;
    return z;
}

signed main()
{
    int n;
    cin >> n;
    vector<int> v = divisors(n);
    bool y = false;
    rep(i, 0, v.size())
        if (verify(v[i]) == true)
            y = true;
    cout << (y?"YES":"NO");
    return 0;
}