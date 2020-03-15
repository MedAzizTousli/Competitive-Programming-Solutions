#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        vector<int> v;
        int a; cin >> a; v.push_back(a);
        rep(i, 1, n)
        {
            int b;
            cin >> b;
            if (a != b)
                v.push_back(b);
            a = b;
        }
        bool y = false;
        rep(i, 0, v.size())
        {
            int x = v[i];
            if (mp[x] == 0)
                mp[x]++;
            else 
            {
                if (mp.size() > 1)
                    y = true;
            }
        }
        cout << (y?"YES":"NO") << "\n";
    }
    return 0;
}