#include <bits/stdc++.h>
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, k, r, s, p;
    cin >> n >> k >> r >> s >> p;
    string t;
    cin >> t;
    ll res = 0;
    string z = "";
    rep(i, 0, t.size())
    {
        if (i < k)
        {
            if (t[i] == 'r')
                z += "p",
                res += p;
            else if (t[i] == 'p')
                z += "s",
                res += s;
            else 
                z += "r",
                res += r;
        }
        else 
        {
            if (t[i] == 'r' && z[i-k] != 'p')
                z += "p",
                res += p;
            else if (t[i] == 'p' && z[i-k] != 's')
                z += "s",
                res += s;
            else if (t[i] == 's' && z[i-k] != 'r')
                z += "r",
                res += r;
            else 
                z += "*";
        }
    }
    cout << res;    
    return 0;
}