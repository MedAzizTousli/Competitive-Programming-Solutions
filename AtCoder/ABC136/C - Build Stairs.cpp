// https://atcoder.jp/contests/abc136/tasks/abc136_c

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, pred, min;
    cin >> n;
    cin >> pred;
    min = pred;
    bool y = true;
    for (int i=0; i<n-1; i++)
    {
        int curr;
        cin >> curr;
        if (curr > pred)
            min = curr - 1;
        if (pred - 1 > curr)
            y = false;
        if (curr < min)
            y = false;
        pred = curr;
    }
    cout << (y?"Yes":"No");
    return 0;
}