#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v1(n), v2(m);
    rep(i, 0, n)
    {
        int a, b;
        cin >> a >> b;
        v1[i] = {a, b};
    }
    rep(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        v2[i] = {a, b};
    }
    rep(i, 0, n)
    {
        int mini = INT_MAX, index = 0;
        rep(j, 0, m)
        {
            int dis = abs(v1[i].first-v2[j].first)+abs(v1[i].second-v2[j].second);
            if (dis < mini)
            {
                mini = dis;
                index = j;
            }
        }
        cout << index + 1 << endl;
    }
    return 0;
}