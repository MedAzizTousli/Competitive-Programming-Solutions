#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

string g1(int x)
{
    string s = to_string(x);
    sort(begin(s), end(s));
    return s;
}

signed main()
{
	int n, k;
    cin >> n >> k;
    rep(i, 0, k)
    {
        string s = to_string(n);
        sort(begin(s), end(s));
        int g2 = stoll(s);
        reverse(begin(s), end(s));
        int g1 = stoll(s);
        int f = g1 - g2;
        n = f;
    }
    cout << n;
	return 0;
}