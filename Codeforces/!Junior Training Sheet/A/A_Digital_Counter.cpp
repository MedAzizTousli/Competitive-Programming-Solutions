#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    map<int, int> mp = {{0,2}, {1,7}, {2,2}, {3,3}, {4,3}, {5,4}, {6,2}, {7,5}, {8,1}, {9,2}};
    int n;
    cin >> n;
    int x = n/10;
    int y = n%10;
    cout << mp[x]*mp[y];
    return 0;
}