// https://atcoder.jp/contests/abc136/tasks/abc136_b

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i=1; i <= n; i++)
        if ( to_string(i).size()%2 == 1 )
            sum++;
    cout << sum;
    return 0;
}