// https://atcoder.jp/contests/abc138/tasks/abc138_b

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    float x=0;
    for (int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        x += 1/(float)a;
    }
    cout << 1/(float)x;
    return 0;
}