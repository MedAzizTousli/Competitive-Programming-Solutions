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
    bool y = false;
    vector<string> v(n);
    rep(i, 0, n)
    {
        string s;
        cin >> s;
        if (s[0] == s[1] && s[0] == 'O' && y == false)
        {
            y = true;
            v[i] = "++|" + string(1, s[3]) + string(1, s[4]);
        }
        else if (s[3] == s[4] && s[3] == 'O' && y == false)
        {
            y = true;
            v[i] = string(1, s[0]) + string(1,s[1]) + "|++";
        }
        else 
            v[i] = s;
    }
    if (y == false)
        cout << "NO";
    else 
    {
        cout << "YES\n";
        rep(i, 0, n)
            cout << v[i] << endl;
    }    
    return 0;
}