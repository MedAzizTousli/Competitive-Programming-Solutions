#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int x = n / (d*2+1);
    int y = n % (d*2+1);
    cout << (y==0?x:x+1);
    return 0;
}
