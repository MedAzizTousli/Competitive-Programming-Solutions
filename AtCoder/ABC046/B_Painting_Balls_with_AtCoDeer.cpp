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
    ll n, k;
    cin >> n >> k;
    cout << k*pw(k-1, n-1);
    return 0;
}