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
        vector<ll> v(n);
        rep(i, 0, n)
            cin >> v[i];
        ll sum = 0;
        bool curr_pos;
        if (v[0] > 0)
            curr_pos = true;
        else 
            curr_pos = false;
        ll best = v[0];
        rep(i, 1, n)
        {
            if (v[i] > 0 && curr_pos == true)
                best = max(best, v[i]);
            if (v[i] < 0 && curr_pos == false)
                best = max(best, v[i]);
            if (v[i] > 0 && curr_pos == false)
            {
                sum += best;
                curr_pos = true;
                best = v[i];
            }
            if (v[i] < 0 && curr_pos == true)
            {
                sum += best;
                curr_pos = false;
                best = v[i];
            }
        }
        cout << sum + best << "\n";
    }
    return 0;
}