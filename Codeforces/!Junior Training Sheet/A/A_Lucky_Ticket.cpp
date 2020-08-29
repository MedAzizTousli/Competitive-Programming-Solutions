#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool y = true;
    rep(i, 0, s.size())
        if (s[i] != '4' && s[i] != '7')
            y = false;
    int sum1 = 0, sum2 = 0;
    rep(i, 0, s.size())
    {
        if (i < s.size()/2)
            sum1 += s[i] - '0';
        else 
            sum2 += s[i] - '0';
    }
    if (sum1 != sum2)
        y = false;
    cout << (y?"YES":"NO");
    return 0;
}