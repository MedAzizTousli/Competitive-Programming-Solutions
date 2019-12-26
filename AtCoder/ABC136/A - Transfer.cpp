#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int x = (c-a+b >= 0) ? c-a+b : 0;
    cout << x;    
    return 0;
}
