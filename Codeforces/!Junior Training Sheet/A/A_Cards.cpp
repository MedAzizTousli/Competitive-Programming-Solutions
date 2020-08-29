#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    int sum = accumulate(begin(v), end(v), 0LL);
    int part = sum / (n/2);
    vector<bool> used(n);
    rep(i, 0, n)
        rep(j, 0, n)
        {
            if (v[i]+v[j] == part && !used[i] && !used[j] && i!=j)
            {
                used[i] = true;
                used[j] = true;
                cout << i+1 << " " << j+1 << endl;
            }
        }
    return 0;
}