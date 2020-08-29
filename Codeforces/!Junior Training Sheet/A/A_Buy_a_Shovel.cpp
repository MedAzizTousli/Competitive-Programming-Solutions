#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int k, r;
    cin >> k >> r;
    int curr = 0;
    int res = 0;
    while(1)
    {
        curr += k;
        res++;
        if (curr % 10 == r || curr % 10 == 0)
            break;
    }    
    cout << res;
    return 0;
}