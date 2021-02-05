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
    vector<int> s = v;
    sort(all(s));
    int idx = 0;
    rep(i, 0, n)
    {
        if (v[i] == s[i])
            continue;
        else 
        {
            idx = i;
            break;
        }
    }
    int x = v[idx]; 
    int y = s[idx]; 
    auto y1 = find(v.begin(), v.end(), y) - v.begin();
    bool res = true;
    for (int i = idx, j = y1; i <= y1 && j >= idx; i++, j--)
        if (v[i] != s[j])
            res = false;
    rep(i, y1+1, n)
        if (v[i] != s[i])
            res = false;
    if (!res)
        cout << "no";
    else 
        cout << "yes" << endl << idx+1 << " " << y1 + 1;
    return 0;
}