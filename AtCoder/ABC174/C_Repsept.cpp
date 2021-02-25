#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int k;
    cin >> k;
    int res = -1;
    if (k%2==0 || k%5==0)
        res = -1;
    else
    {
        int t = 7;
        rep(i, 1, k+1)
        {
            if (t%k==0)
            {
                res = i;
                break;
            }
            t = (t*10+7)%k;
        }
    }
    cout << res;
	return 0;
}