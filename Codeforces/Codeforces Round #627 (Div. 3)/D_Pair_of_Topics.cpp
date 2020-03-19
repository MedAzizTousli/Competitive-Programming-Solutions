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
    vector<int> vp;
    vector<int> vs;
    vector<int> v;
    for (int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        vp.push_back(a);
    }
    for (int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        vs.push_back(a);
    }
    for (int i=0; i<n; i++)
        v.push_back(vp[i]-vs[i]);
    sort(v.begin(), v.end());
    ll ans = 0;
    int neg = 0;
    int pos = v.size()-1;
    while(pos != neg)
    {
        if (v[pos] <= 0)
            break;
        if (v[pos] == v[neg])
        {
            ans += pos-neg;
            pos--;
        }
        else if (v[pos]>abs(v[neg]))
        {
            ans += pos-neg;
            pos--;
        }
        else
        {
            neg++;
        }
    }
    cout << ans;
    return 0;
}
