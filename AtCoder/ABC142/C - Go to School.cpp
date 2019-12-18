// https://atcoder.jp/contests/abc142/tasks/abc142_c

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v;
    vector <int> neww(n+1);
    for (int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i=1; i<=n; i++)
    {
        neww[v[i-1]] = i;
    }
    for (int i=1; i<=n; i++)
    {
        cout << neww[i] << " ";
    }
    return 0;
}