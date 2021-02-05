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
    
    map<char, string> mp = {{'2',"2"}, {'3', "3"}, 
    {'4', "322"}, {'5', "5"}, {'6', "35"}, {'7', "7"}, {'8', "2227"}, {'9', "332227"}};
    string res = "";
    rep(i, 0, s.size())
    {
        res += mp[s[i]];
    }
    sort(rbegin(res), rend(res));
    cout << res;
    return 0;
}