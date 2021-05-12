#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int a, b;
    cin >> a >> b;
    int res = 0;
    if (a+b >= 15 && b >= 8)
        res = 1;
    else if (a+b >= 10 && b >= 3)
        res = 2;
    else if (a+b >= 3)
        res = 3;
    else 
        res = 4;
    cout << res;
	return 0;
}