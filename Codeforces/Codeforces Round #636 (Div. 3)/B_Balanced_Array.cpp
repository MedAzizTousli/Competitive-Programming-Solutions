#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if ((n/2)%2 != 0)
        {
            cout << "NO\n";
            continue;
        }
        else 
        {
            cout << "YES\n";
            ll sum1 = 0, sum2 = 0;
            for (ll i = 2; i <= n; i+=2)
            {
                cout << i << " ";
                sum1+=i;
            }
            for (ll i = 1; i < n - 1; i+=2)
            {
                cout << i << " ";
                sum2+=i;
            }
            cout << sum1-sum2 << "\n";
        }
    }
    return 0;
}