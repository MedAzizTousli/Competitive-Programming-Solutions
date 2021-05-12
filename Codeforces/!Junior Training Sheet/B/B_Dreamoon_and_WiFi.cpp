#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	string s, t;
    cin >> s >> t;
    int resS = 0, resT = 0, cnt = 0;
    cout.precision(20);
    rep(i, 0, s.size())
        if (s[i] == '+')
            resS++;
        else 
            resS--;
    rep(i, 0, t.size())
        if (t[i] == '+')
            resT++;
        else if (t[i] == '-')
            resT--;
        else 
            cnt++;
    int n = cnt;
    int res = 0;
    if (n == 0)
        return cout << (resS == resT?1:0), 0;
    for(int mask = 0; mask < (1<<n); mask++)
    {
        vector<bool> active(n, false);
        for(int i=0; i<n; i++) if(mask & (1<<i))
            active[i] = true;
        int cur = resT;
        rep(i, 0, n)
            if (active[i] == 1)
                cur++;
            else 
                cur--;
        if (cur == resS)
            res++;
    }
    cout << setprecision(20) << (double)res / (double)(1<<cnt);
	return 0;
}