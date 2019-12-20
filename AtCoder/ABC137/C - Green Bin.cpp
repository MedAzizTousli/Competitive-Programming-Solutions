// https://atcoder.jp/contests/abc137/tasks/abc137_c

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    long long sum = 0;
    for (int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        sum+=m[s];
        m[s]++;
        // sum+=m[s]++;
    }
    cout << sum;
    return 0;
}