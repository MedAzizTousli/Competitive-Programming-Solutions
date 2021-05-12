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
    int l = (int)(log10(n) + 1);
    int res = 0;
    if (l <= 3)
        res = 0;
    else if (l <= 6)
        res = n - 999;
    else if (l <= 9)
        res = 2*(n - 999999) + 1*(999999-999);
    else if (l <= 12)
        res = 3*(n - 999999999) + 2*(999999999-999999) + 1*(999999-999);
    else if (l <= 15)
        res = 4*(n - 999999999999) + 3*(999999999999-999999999) + 2*(999999999-999999) + 1*(999999-999);
    else if (l == 16)
        res = 5 + 4*(999999999999999 - 999999999999) + 3*(999999999999-999999999) + 2*(999999999-999999) + 1*(999999-999);
    cout << res;
	return 0;
}