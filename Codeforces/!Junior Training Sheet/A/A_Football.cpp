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
    map<string, int> mp;
    while(n--)
    {
        string a;
        cin >> a;
        mp[a]++;
    }
    auto it = mp.begin();
    int x = it->second;
    string x1 = it->first;
    if (mp.size() == 1)
        return cout << x1, 0;
    it++;
    int y = it->second;
    string y1 = it->first;
    if (x > y)
        cout << x1;
    else 
        cout << y1;
    return 0;
}