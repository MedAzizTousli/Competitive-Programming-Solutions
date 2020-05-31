#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> t(n);
    vector<ll> a(n);
    rep(i, 0, n)
        cin >> t[i] >> a[i];
    ll currT = t[0], currA = a[0];
    rep(i, 1, n)
    {
        if (t[i] >= currT && a[i] >= currA)
        {
            currT = t[i];
            currA = a[i];
        }
        else 
        {
            ll q = max(currT / t[i] + (currT % t[i] == 0?0:1), 
                        currA / a[i] + (currA % a[i] == 0?0:1));
            ll oldT = currT;
            ll oldA = currA;
            currT = t[i] * q;
            currA = a[i] * q;
            if (currT < oldT || currA < oldA)
            {
                q = max(oldT / currT + (currT % t[i] == 0?0:1), 
                        oldA / currA + (currA % a[i] == 0?0:1));
                currT = t[i] * q;
                currA = a[i] * q;  
            }
        }
    }
    cout << currT + currA;
    return 0;
}