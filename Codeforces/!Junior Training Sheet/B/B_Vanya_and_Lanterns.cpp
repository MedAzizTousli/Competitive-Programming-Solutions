#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    double n, l;
    cin >> n >> l;
    vector<double> v(n);
    rep(i, 0, n)
        cin >> v[i];
    sort(all(v));
    double res = 0;
    rep(i, 0, n-1)
        res = max(res, (v[i+1] - v[i]) / 2);
    res = max(res, v[0]);
    res = max(res, l-v[n-1]);
    printf("%.10lf", res);
    return 0;
}