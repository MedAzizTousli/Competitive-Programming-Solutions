#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum4 = 0;
    int sum2 = 0;
    rep(i, 0, n)
    {
        int a;
        cin >> a;
        if (a % 4 == 0)
            sum4++;
        else if (a % 2 == 0)
            sum2++;
    }
    cout << (sum4 + sum2/2 + 1> n / 2?"Yes":"No");
    return 0;
}