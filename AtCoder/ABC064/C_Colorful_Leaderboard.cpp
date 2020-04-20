#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, bool> mp;
    int sum = 0;
    rep(i, 0, n)
    {
        int a;
        cin >> a;
        if (a >= 1 && a <= 399)
            mp["gray"] = true;
        if (a >= 400 && a <= 799)
            mp["brown"] = true;
        if (a >= 800 && a <= 1199)
            mp["green"] = true;
        if (a >= 1200 && a <= 1599)
            mp["cyan"] = true;
        if (a >= 1600 && a <= 1999)
            mp["blue"] = true;
        if (a >= 2000 && a <= 2399)
            mp["yellow"] = true;
        if (a >= 2400 && a <= 2799)
            mp["orange"] = true;
        if (a >= 2800 && a <= 3199)
            mp["red"] = true;
        if (a >= 3200)
            sum++;        
    }
    if (mp.size() == 0 && sum != 0)
        cout << 1 << " " << sum;
    else 
        cout << mp.size() << " " << mp.size() + sum;
    return 0;
}