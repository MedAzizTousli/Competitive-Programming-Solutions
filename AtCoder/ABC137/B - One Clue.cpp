// https://atcoder.jp/contests/abc137/tasks/abc137_b

#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,x;
    cin >> k >> x;
    for (int i=x-(k-1);i<=x+(k-1);i++)
        cout << i << " ";
    return 0;
}