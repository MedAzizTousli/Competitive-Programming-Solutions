#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b * 2)
        cout << a - 2*b;
    else 
        cout << 0;    
    return 0;
}