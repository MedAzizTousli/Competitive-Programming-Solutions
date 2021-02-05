#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    sort(begin(v), end(v));
    int c = v[n-1];
    int b = v[n-2];
    int a = c-b;
    bool y = false;
    rep(i, 0, n-2)
        if (v[i] + v[i+1] > v[i+2])
            y = true;
    if (y)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}