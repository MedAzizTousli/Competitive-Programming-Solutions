#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    rep(i, 1, n + 1)
        cin >> v[i];
    vector<bool> vis(n+1, false);
    int sum = 0;
    int i = 1;
    while(true)
    {
        sum++;
        if (v[i] == 2)
            return cout << sum, 0;
        if (vis[i] == true)
            break;
        vis[i] = true;
        i = v[i];
    }
    cout << -1;
    return 0;
}