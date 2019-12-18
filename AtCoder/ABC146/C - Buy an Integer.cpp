// https://atcoder.jp/contests/abc146/tasks/abc146_c

#include<bits/stdc++.h>
using namespace std;

int main() {

    long long a,b,x,n,l,max=0;
    cin >> a >> b >> x;

    for (int d=1; d<=18; d++)
    {
        n = ( x - b * d ) / a;
        l = to_string(n).size();
        if (l > d)
            continue;
        if (max<n) max = n;
    }

    if (max>1000000000) cout << 1000000000;
    else cout << max;

    return 0;

}
