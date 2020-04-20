#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        rep(i, 0, n)
            cin >> v[i];
        // Gauche
        int maxi = v[0];
        int nb = 1;
        map<int,int> g;
        if (maxi == 1)
            g[0]++;
        map<int, int> mp;
        mp[maxi]++;
        rep(i, 1, n)
        {
            maxi = max(maxi, v[i]);
            nb++;
            mp[v[i]]++;
            if (mp[v[i]] > 1)
                break;
            if (maxi == nb)
                g[i]++;
        }
        // Droite
        maxi = v[n-1];
        nb = 1;
        map<int, int> d;
        if (maxi == 1)
            d[n-1]++;
        map<int, int> mp2;
        mp2[maxi]++;
        rep(i, n-1, 0)
        {
            maxi = max(maxi, v[i]);
            nb++;
            mp2[v[i]]++;
            if (mp2[v[i]] > 1)
                break;
            if (maxi == nb)
                d[i]++;
        }
        // Final
        vector<int> res;
        for (auto it:g)
            if (d[it.first + 1] == 1)
                res.push_back(it.first + 1);
        cout << res.size() << "\n";
        rep(i, 0, res.size())
            cout << res[i] << " " << n - res[i] << "\n";
    }
    return 0;
}