#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 4) --> {1,2,3,4}
// rep(i, 4, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    sort(begin(v), end(v));
    int ans = INT_MAX;
    rep(i, v[0], v[v.size()-1]+1)
    {
        int sum = 0;
        rep(j, 0, n)
        {
            sum += pow(v[j] - i, 2);
        }
        ans = min(ans, sum);
    }
    cout << ans;
    return 0;    
}