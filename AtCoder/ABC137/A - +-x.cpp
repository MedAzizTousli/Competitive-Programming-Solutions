// https://atcoder.jp/contests/abc137/tasks/abc137_a

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    vector<int> v;
    v.push_back(a+b);
    v.push_back(a-b);
    v.push_back(a*b);
    cout << *max_element(v.begin(), v.end());
    return 0;
}