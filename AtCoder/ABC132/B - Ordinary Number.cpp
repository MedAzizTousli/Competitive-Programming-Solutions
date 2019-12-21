// https://atcoder.jp/contests/abc132/tasks/abc132_b

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, sum=0;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    for (int i=1; i<n-1; i++)
        if ((v[i] <= v[i-1] && v[i] >= v[i+1]) || (v[i] >= v[i-1] && v[i] <= v[i+1]))
            sum++;
    cout << sum;
    return 0;
}