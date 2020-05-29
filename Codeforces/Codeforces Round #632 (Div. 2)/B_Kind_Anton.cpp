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
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        rep(i, 0, n)
            cin >> a[i];
        rep(i, 0, n)
            cin >> b[i];
        vector<bool> dp1(n);
        vector<bool> dp0(n);
        vector<bool> dp2(n);
        if (a[0] == 0)
            dp0[0] = true;
        else if (a[0] == 1)
            dp1[0] = true;
        else if (a[0] == -1)
            dp2[0] = true;
        dp0[0] = true;
        rep(i, 1, n)
        {
            if (a[i] == 0)
            {
                dp0[i] = true;
                dp1[i] = dp1[i-1];
                dp2[i] = dp2[i-1];
            }
            else if (a[i] == 1)
            {
                dp0[i] = dp0[i-1];
                dp1[i] = true;
                dp2[i] = dp2[i-1];
            }
            else if (a[i] == -1)
            {
                dp0[i] = dp0[i-1];
                dp1[i] = dp1[i-1];
                dp2[i] = true;
            }           
        }
        bool res = true;
        rep(i, 1, n)
        {
            if (b[i] > a[i] && dp1[i-1] != true)
                res = false;
            else if (b[i] < a[i] && dp2[i-1] != true)
                res = false;
            else if (b[i] == a[i] && dp0[i-1] != true)
                res = false;
        }
        if (a[0] != b[0])
        {
            cout << "NO\n";
            continue;
        }
        cout << (res?"YES":"NO") << "\n";
    }
    return 0;
}