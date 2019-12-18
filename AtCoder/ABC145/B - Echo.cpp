// https://atcoder.jp/contests/abc145/tasks/abc145_b

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n%2 == 1) cout << "No";
    else
        if (s.substr(0,n/2) == s.substr(n/2,n/2))
            cout << "Yes";
        else 
            cout << "No";
    return 0;
}