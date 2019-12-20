// https://atcoder.jp/contests/abc135/tasks/abc135_c

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> va(n+1);
    vector<int> vb(n);
    for (int i=0; i<n+1; i++)
        cin >> va[i];
    for (int j=0; j<n; j++)
        cin >> vb[j];
    long long sum = 0;
    for (int i=0; i<n; i++)
    {
        int x = min(va[i], vb[i]);
        sum += x;
        vb[i] -= x;
        x = min(va[i+1], vb[i]);
        sum += x;
        va[i+1] -= x;
    }
    cout << sum;
    
    return 0;
}