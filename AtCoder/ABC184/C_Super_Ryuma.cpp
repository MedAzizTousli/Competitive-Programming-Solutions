#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int res = 0;
    if (r1 == r2 && c1 == c2)
        res = 0;
    else if (r1+c1==r2+c2 || r1-c1==r2-c2 || abs(r1-r2)+abs(c1-c2)<=3)
        res = 1;
    else if ((r1+r2+c1+c2)%2 == 0 || 
            abs(r1-r2)+abs(c1-c2)<=6 ||
            abs(r1+c1-r2-c2)<=3 ||
            abs(r1-c1-r2+c2)<=3)
        res = 2;
    else 
        res = 3;
    cout << res;
	return 0;
}