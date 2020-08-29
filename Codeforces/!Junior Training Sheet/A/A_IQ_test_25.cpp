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
    vector<int> p;
    vector<int> q;
    rep(i, 1, n+1)
    {
        int a;
        cin >> a;
        if (a%2 == 0)
            p.push_back(i);
        if (a%2 == 1)
            q.push_back(i);
    }
    if (p.size() == 1)
        cout << p[0];
    else 
        cout << q[0];    
    return 0;
}