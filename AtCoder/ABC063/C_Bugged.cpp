#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    rep(i, 0, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(begin(v), end(v));
    if (sum % 10 == 0)
        rep(i, 0, n)
            if (v[i] % 10 != 0)
            {
                sum = sum - v[i];
                break;
            }
    if (sum % 10 == 0)
        sum = 0;
    cout << sum;
    return 0;
}