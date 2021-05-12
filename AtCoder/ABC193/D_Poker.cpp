#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int score (string s)
{
    map<int, int> mp;
    rep(i, 1, 10)
        mp[i] = 0;
    rep(i, 0, s.size())
        mp[s[i]-'0']++;
    int res = 0;
    for (auto x:mp)
        res += x.first * pow(10, x.second);
    return res;    
}

signed main()
{
    int k;
    cin >> k;
    string s, t;
    cin >> s >> t;
    vector<int> cnt(10, k);
    for(char c : s + t) cnt[c - '0']--;
    int win = 0;
    rep(x, 1, 10)
        rep(y, 1, 10)
        {
            s.back() = '0' + x;
            t.back() = '0' + y;
            if (score(s) <= score(t)) continue;
            win += cnt[x] * (cnt[y] - (x == y));
        }
    const ll rem = 9 * k - 8;
    cout << double(win) / rem / (rem - 1) << endl; 
	return 0;
}