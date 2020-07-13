#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

map<int, int> trial_division(int n)
{
    map<int, int> factorization;
    while (n % 2 == 0)
    {
        factorization[2]++;
        n /= 2;
    }
    for (int d = 3; d * d <= n; d += 2)
    {
        while (n % d == 0)
        {
            factorization[d]++;
            n /= d;
        }
    }
    if (n > 1)
        factorization[n]++;
    return factorization;
}

signed main()
{
    FLASH
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int, int> mp = trial_division(n);
        bool y = true;
        for (auto x:mp)
            if (x.first != 2 && x.first != 3)
                y = false;
        if (mp[2] > mp[3])
            y = false;
        if (n == 1)
            cout << 0;
        else if (y == false)
            cout << -1;
        else 
            cout << max(mp[2], mp[3]) - min(mp[2], mp[3]) + max(mp[2], mp[3]);
        cout << "\n";
    }
    return 0;
}