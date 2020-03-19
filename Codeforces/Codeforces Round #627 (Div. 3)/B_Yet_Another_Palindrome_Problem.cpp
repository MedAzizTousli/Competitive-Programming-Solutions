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
        vector<int> v(n);
        rep(i, 0, n)
            cin >> v[i];
        bool y = false;
        rep(i, 0, n)
            rep(j, i+2, n)
            {
                if(v[i] == v[j])
                {
                    y = true;
                    break;
                }
            }
        cout << (y?"YES":"NO") << "\n";
    }
    return 0;
}
