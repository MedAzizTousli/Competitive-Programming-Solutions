// https://atcoder.jp/contests/abc132/tasks/abc132_c

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int x = v.size() / 2;
    cout << v[x]-v[x-1];
    return 0;
}