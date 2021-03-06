#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n, C;
    cin >> n >> C;
    set<int> s;
    map<int, int> mp;
    rep(i, 0, n)
    {
        int a, b, c;
        cin >> a >> b >> c;
        s.insert(a);
        s.insert(b+1);
        mp[a] += c;
        mp[b+1] -= c;
    }
    vector<int> v(begin(s), end(s));
    int acc = 0, res = 0;
    rep(i, 0, v.size()-1)
    {
        acc += mp[v[i]];
        res += min(C, acc) * (v[i+1] - v[i]);
    }
    cout << res;
	return 0;
}