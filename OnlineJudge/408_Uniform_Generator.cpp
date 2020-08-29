#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int a;
    while (cin >> a)
    {
        int b;
        cin >> b;
        cout << setw(10) << a << setw(10) << b;
        if (__gcd(a,b) == 1)
            cout << "    Good Choice";
        else 
            cout << "    Bad Choice";
        cout << endl << endl;
    }
    return 0;
}