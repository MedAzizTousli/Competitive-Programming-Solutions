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
    int res = 0;
    map<string, int> mp = {{"Tetrahedron", 4}, {"Cube",6}, {"Octahedron", 8},
                        {"Dodecahedron", 12}, {"Icosahedron",20}};
    while(n--)
    {
        string s;
        cin >> s;
        res += mp[s];
    }
    cout << res;
    return 0;
}