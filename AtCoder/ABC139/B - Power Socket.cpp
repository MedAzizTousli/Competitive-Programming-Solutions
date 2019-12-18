// https://atcoder.jp/contests/abc139/tasks/abc139_b

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if ((b-1) % (a-1) == 0)
        cout << (b-1) / (a-1);
    else
        cout << (b-1) / (a-1) + 1;
    return 0;
}