// https://atcoder.jp/contests/abc130/tasks/abc130_c

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    double w,h,x,y;
    cin >> w >> h >> x >> y;
    bool t = (x==w/2.0 && y==h/2.0);
    printf("%.9f %d", w*h/2, t); 
    return 0;
}