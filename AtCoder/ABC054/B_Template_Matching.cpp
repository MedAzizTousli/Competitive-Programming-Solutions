#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n), b(m);
    bool res;
    rep(i, 0, n)
        cin >> a[i];
    rep(j, 0, m)
        cin >> b[j];
    rep(i, 0, n - m + 1)
    {
        rep(j, 0, n - m + 1)
        {
            res = true;
            rep(k, 0, m)
            {
                string s2 = a[i+k].substr(j, m);
                if (s2 != b[k])
                {
                    res = false;
                    break;
                }
            }
            if (res == true)
                break;
        }
        if (res == true)
            break;
    }
    cout << (res?"Yes":"No");
    return 0;
}