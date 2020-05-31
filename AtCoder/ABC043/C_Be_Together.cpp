#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    vector<int> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    sum = round(sum / (float)n);
    ll res = 0;
    rep(i, 0, n)
        res += (v[i] - sum) * (v[i] - sum);
    cout << res;
    return 0;
}