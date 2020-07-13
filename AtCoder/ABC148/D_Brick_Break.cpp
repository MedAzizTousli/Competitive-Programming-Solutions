#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    int curr = 1;
    bool y = false;
    rep(i, 0, n)
    {
        int a;
        cin >> a;
        if (a == curr)
            curr++;
        if (a == 1)
            y = true;
    }
    if (curr == 1 && y == false)
        cout << -1;
    else if (curr == 1 && y == true)
        cout << 1;
    else 
        cout << n - curr + 1;
    return 0;
}