// https://atcoder.jp/contests/abc140/tasks/abc140_c

#include<bits/stdc++.h>
using namespace std;

int min(int x, int y) 
{ 
  return (x < y) ? x : y ;
} 

int main() {
    int n,b,a,sum;
    cin >> n;
    cin >> b;
    a = b;
    sum = b;
    for (int i=1; i<n-1; i++)
    {
        int b;
        cin >> b;
        sum += min(b, a);
        a = b;
    }
    sum += a;
    cout << sum;
    return 0;
}