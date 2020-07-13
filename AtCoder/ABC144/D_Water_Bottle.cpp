#include <bits/stdc++.h>
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    double a, b, x;
    cin >> a >> b >> x;
    double volC = a*a*b;
    double volW = x;
    double pi = 4 * atan(1);
    if (volW > volC / 2)
    {
        double z = 2 * x / (a * a) - b;
        // cout << b - z << endl;
        cout << setprecision(12) << atan((b - z) / a) * 180 / pi;
    }
    else if (volW < volC / 2)
    {
        double z = 2 * x / (b * a);
        cout << setprecision(12) << atan(b / z) * 180 / pi;
    }
    else 
        cout << 45;
    return 0;
}