#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    string s;
    int n, k;
    cin >> n >> k;
    cin >> s;
    int t = s.find('T');
    int g = s.find('G');
    int a = min(t, g);
    int b = max(t, g);
    bool y = true;
    bool reach = false;
    for (int i = a; i <= b; i += k)
    {
        if (s[i] == '#')
            y = false;
        if (i == b)
            reach = true;
    }
    if (!reach)
        y = false;
    cout << (y?"YES":"NO");
    return 0;
}