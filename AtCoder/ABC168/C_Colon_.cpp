#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    double a, b, h, m;
    cin >> a >> b >> h >> m;
    double pi = 2*acos(0.0);
    double alph = (60*h+m)/(60*12)*(2*pi);
    double beta = (m/60)*(2*pi);
    double res = sqrt(a*a+b*b-2*a*b*cos(alph - beta));
    cout << setprecision(10) << res;
    return 0;
}