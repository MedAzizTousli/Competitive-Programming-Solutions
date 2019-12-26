#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int m=n;
    for (int i=0; i<m; i++)
    {
        int d;
        cin >> d;
        if (d<k) 
            n--;
    }
    cout << n;
    return 0;
}