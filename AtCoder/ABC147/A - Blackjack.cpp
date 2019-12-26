#include<bits/stdc++.h>
using namespace std;

int main() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    if (a1+a2+a3 >= 22)
        cout << "bust";
    else
        cout << "win";
    return 0;
}