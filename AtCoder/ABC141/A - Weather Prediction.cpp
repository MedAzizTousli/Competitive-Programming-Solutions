// https://atcoder.jp/contests/abc141/tasks/abc141_a

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s == "Sunny")
        cout << "Cloudy";
    else if (s == "Cloudy")
        cout << "Rainy";
    else
        cout << "Sunny";
    return 0;
}