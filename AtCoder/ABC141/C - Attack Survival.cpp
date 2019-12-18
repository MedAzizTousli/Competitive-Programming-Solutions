// https://atcoder.jp/contests/abc141/tasks/abc141_c

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,q;
    cin >> n >> k >> q;
    vector <int> v(n,0);
    for (int i=0; i<q; i++)
    {
        int a;
        cin >> a;
        v[a-1]++;
    }
    for (int j=0; j<n; j++)
    {
        if (k>q-v[j])
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}