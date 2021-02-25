#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    int maxi = *max_element(v.begin(), v.end());
    int res = 0;
    int out = 0;
    rep(i, 2, maxi+1)
    {
        int ans = 0;
        rep(j, 0, n)
        {
            if (v[j]%i == 0)
                ans++;
        }
        if (ans >= res)
        {
            out = i;
            res = ans;
        }
    }
    cout << out;
	return 0;
}