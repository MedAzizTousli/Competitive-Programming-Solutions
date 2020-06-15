#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<bool> v1(m, false);
        vector<bool> v2(n, false);
        rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                int a;
                cin >> a;
                if (a == 1)
                {
                    v1[j] = true;
                    v2[i] = true;
                }
            }
        }
        int res = 0;
        int x = max(n,m);
        rep(i, 0, m)
        {
            if (v1[i] == false)
                res += 1;
        }
        int res2 = 0;
        rep(i, 0, n)
        {
            if (v2[i] == false)
                res2 += 1;
        }
        res = min(res, res2);
        cout << (res % 2 == 0?"Vivek":"Ashish") << endl;
    }
    return 0;
}
