#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    set<pair<int,int>> s;
    map<int, bool> mp;
    rep(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        s.insert({a,b});
    }
    for (auto x:s)
    {
        int a = x.first;
        int b = x.second;
        if (a == 1)
            mp[b] = true;
        if (b == n)
            if (mp[a] == true)
                return cout << "POSSIBLE", 0;
    }
    cout << "IMPOSSIBLE";    
    return 0;
}