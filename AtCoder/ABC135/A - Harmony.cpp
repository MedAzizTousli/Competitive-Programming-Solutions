// https://atcoder.jp/contests/abc135/tasks/abc135_a

#include<bits/stdc++.h>
using namespace std;

int main() {
    double a,b;
    cin >> a >> b;
    double x = (a+b)/2.0;
    cout << ( (x == (int)x) ? to_string((int)x) : "IMPOSSIBLE");
    return 0;
}