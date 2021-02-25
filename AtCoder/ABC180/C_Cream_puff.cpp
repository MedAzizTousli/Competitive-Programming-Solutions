#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
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

signed main()
{
	int n;
    cin >> n;
    vector<ll> v = divisors(n);
    sort(begin(v), end(v));
    for (auto x:v)
        cout << x << endl;
	return 0;
}