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
    int last = v[n-1];
    int first = v[0];
    vector<pair<int, int>> res(n);
    rep(i, 0, n)
    {
        if (i == 0)
        {
            res[i].first = v[i+1] - v[i];
            res[i].second = last - v[i];
        }
        else if (i == n-1)
        {
            res[i].first = v[i] - v[i-1];
            res[i].second = v[i] - first;
        }
        else 
        {
            res[i].first = min(v[i] - v[i-1], v[i+1] - v[i]);
            res[i].second = max(last-v[i], v[i]-first);
        }
    }
    rep(i, 0, n)
        cout << res[i].first << " " << res[i].second << endl;    
    return 0;
}