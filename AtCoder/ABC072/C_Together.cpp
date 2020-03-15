#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        int a;
        cin >> a;
        mp[a]++;
        mp[a-1]++;
        mp[a+1]++;
    }
    int maxx = 0;
    for (auto x:mp)
        maxx = max(maxx, x.second);
    cout << maxx;
    return 0;
}