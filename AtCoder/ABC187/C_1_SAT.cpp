#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n;
    cin >> n;
    map<string, bool> mp;
    map<string, bool> mp2;
    while(n--)
    {
        string s;
        cin >> s;
        if (s[0] == '!')
            mp2[s] = true;
        else 
            mp[s] = true;
    }
    string res = "satisfiable";
    for (auto x:mp)
        if (mp2["!"+x.first] == true)
            res = x.first;
    cout << res;
	return 0;
}