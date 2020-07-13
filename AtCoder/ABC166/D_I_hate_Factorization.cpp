#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

ll pw(ll a, ll n)
{
    ll ans = 1;
    while (n > 0)
    {
        if (n % 2 != 0)
            ans = ans * a;
        a = a * a;
        n = n / 2;
    }
    return ans;
}

int main()
{
    ll x;
    cin >> x;
    bool y = false;
    for (ll i = -1000; i < 1000; i++)
    {
        for (ll j = -1000; j < 1000; j++)
        {
            if (pw(i,5) - pw(j,5) == x)
            {
                cout << i << " " << j << endl;
                y = true;
                break;
            }
        }
        if (y == true)
            break;
    }
    return 0;
}