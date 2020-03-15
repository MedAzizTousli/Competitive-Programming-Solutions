#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> va(n+1);
    vector<int> vb(n+1);
    vector<int> vc(n+1);
    vector<int> dpa(n+1, 0);
    vector<int> dpb(n+1, 0);
    vector<int> dpc(n+1, 0);
    rep(i, 1, n+1)
        cin >> va[i] >> vb[i] >> vc[i];
    rep(i, 1, n+1)
    {
        dpa[i] = va[i] + max(dpb[i-1], dpc[i-1]);
        dpb[i] = vb[i] + max(dpa[i-1], dpc[i-1]);
        dpc[i] = vc[i] + max(dpa[i-1], dpb[i-1]);
    }
    cout << max({dpa[n], dpb[n], dpc[n]});
    return 0;
}