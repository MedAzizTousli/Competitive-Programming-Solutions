# Submit here: https://codeforces.com/contest/633/problem/A

#include <bits/stdc++.h>
#define ever ;;
using namespace std;

int main() {
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    for (int i=0;; i++) {
        if ((c - a*i) % b == 0 && c >= a*i) 
        {
            cout << "Yes";
            return 0;
        }
        if (a*i > c) break;
    }
    cout << "No";
    return 0;
}
