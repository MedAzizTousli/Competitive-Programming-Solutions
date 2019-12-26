#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i++)
        s[i] = ((int(s[i]) + n) - int('A')) % 26 + int('A');
    cout << s;
    return 0;

}