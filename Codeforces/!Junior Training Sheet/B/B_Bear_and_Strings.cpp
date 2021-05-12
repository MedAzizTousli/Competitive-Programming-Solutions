#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	string s;
    cin >> s;
    int cnt = 0;
    int res = 0;
    int prev = 0;
    if (s.size() < 4)
        return cout << 0, 0;
    rep(i, 0, s.size()-3)
    {
        if (s[i] == 'b' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'r')
        {
            cnt++;
            res += (i-prev+1) * (s.size()-(i+3));
            prev = i+1;
        }
    }
    cout << res;
	return 0;
}