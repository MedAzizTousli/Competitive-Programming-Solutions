// https://atcoder.jp/contests/abc135/tasks/abc135_b

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v;
    for (int i=0; i<n; i++)
    {
        int p;
        cin >> p;
        v.push_back(p);
    }
    vector <int> w = v;
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i=0; i<n; i++)
        if (w[i] != v[i])
            sum++;
    cout << (sum==0 || sum==2 ? "YES":"NO");
    return 0;
}