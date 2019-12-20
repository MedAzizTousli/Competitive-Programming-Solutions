// https://atcoder.jp/contests/abc133/tasks/abc133_c

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll l, r, minn=2018;
    cin >> l >> r;
    if ((l-1)/2019 != r/2019)
    {
        cout << 0;
        return 0;
    }
    else
        for (ll i=l; i<r; i++)
            for (ll j=i+1; j<r+1; j++)
                minn = min(minn, (i*j)%2019);
    cout << minn;
    return 0;
}