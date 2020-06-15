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
        bool y1 = false, y0 = false;
        rep(i, 0, n)
        {
            cin >> b[i];
            if (b[i] == 0)
                y0 = true;
            if (b[i] == 1)
                y1 = true;
        }
        if (y0 == true && y1 == true)
            cout << "Yes\n";
        else 
        {
            vector<int> v = a;
            sort(begin(v), end(v));
            if (a == v)
                cout << "Yes\n";
            else 
                cout << "No\n";
        }
    }
    return 0;
}