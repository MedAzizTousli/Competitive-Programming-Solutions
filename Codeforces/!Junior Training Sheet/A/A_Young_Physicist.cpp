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
    int a = 0, b = 0, c = 0;
    while(n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a+=x;
        b+=y;
        c+=z;
    }
    if (a == 0 && b == 0 && c == 0)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}