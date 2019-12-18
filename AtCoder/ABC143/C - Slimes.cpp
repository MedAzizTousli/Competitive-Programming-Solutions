// https://atcoder.jp/contests/abc143/tasks/abc143_c

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char x;
    cin >> x;
    int m=n;
    for (int i=0; i<m-1; i++)
    {
        char y;
        cin >> y;
        if (x==y) 
        {
            n--;
        }
        else
            x = y;
    }
    cout << n;
    return 0;
}