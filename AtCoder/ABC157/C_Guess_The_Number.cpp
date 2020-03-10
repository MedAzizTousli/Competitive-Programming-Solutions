#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 4) --> {1,2,3,4}
// rep(i, 4, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> v;
    vector<int> a(n, -1);
    rep(i, 0, m)
    {
        int s, c;
        cin >> s >> c;
        v.push_back({s, c});
    }
    bool ans = true;
    
    rep(i, 0, v.size())
    {
        int index = v[i].first-1;
        int number = v[i].second;
        if (a[index] == -1)
            a[index] = number;
        else 
            if (a[index] != number)
            ans = false;
    }
    if (n != 1 && a[0] == 0)
        ans = false;
    if (n==1 && m==0)
        return cout << 0, 0;
    if (ans == false)
        cout << -1;
    else 
        rep(i, 0, a.size())
        {
            if (a[i] == -1 && i==0)
                cout << 1;
            else if ((a[i] == -1 && i!=0))
                cout << 0;
            else 
                cout << a[i];
        }
    return 0;
}