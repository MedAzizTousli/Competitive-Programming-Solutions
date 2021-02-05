#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    a--;
    int res = 0;
    for (int i = a, j = a; i < n || j >= 0; i++, j--)
    {
        if (i == a && v[i] == 1)
            res++;
        else if (i >= n && v[j] == 1)
            res++;
        else if (j < 0 && v[i] == 1)
            res++;
        else if (v[i] == v[j] && v[i] == 1)
            res+=2;
    }
    cout << res;
    return 0;
}