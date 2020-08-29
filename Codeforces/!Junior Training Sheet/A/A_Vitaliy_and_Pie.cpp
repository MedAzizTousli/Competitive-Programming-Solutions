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
    map<char, int> mp;
    int res = 0;
    rep(i, 0, s.size())
    {
        if (i%2==0)
            mp[s[i]]++;
        else 
        {
            char x = s[i];
            if (mp[x+32] == 0)
                res++;
            else 
                mp[x+32]--;
        }
    }
    cout << res;
    return 0;
}