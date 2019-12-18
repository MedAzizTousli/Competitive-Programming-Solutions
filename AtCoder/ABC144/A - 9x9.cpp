// https://atcoder.jp/contests/abc144/tasks/abc144_a

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if (a < 10 && b < 10)
        cout << a * b;
    else
        cout << -1;    
    return 0;
}