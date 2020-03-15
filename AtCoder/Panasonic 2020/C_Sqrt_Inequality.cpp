// #include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    long double a, b, c;
    cin >> a >> b >> c;
    cout << (a+b+2*sqrtl(a*b)<c?"Yes":"No");
    return 0;
}