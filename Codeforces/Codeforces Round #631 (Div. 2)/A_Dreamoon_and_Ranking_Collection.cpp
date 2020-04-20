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
        int n, x;
        cin >> n >> x;
        vector<bool> v(1000, false);
        rep(i, 1, n + 1)
        {
            int a;
            cin >> a;
            v[a] = true;
        }
        int i;
        for(i = 1; i < 1000; i++)
        {
            if (v[i] == false && x == 0)
                break;
            if (v[i] == false && x != 0)
                x--;
        }
        cout << i - 1 << "\n";
    }
    return 0;
}