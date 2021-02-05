#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    cout.precision(20);
    double n;
    while(cin >> n)
    {
        if (n == 0)
            break;
        vector<int> v(n);
        rep(i, 0, n)
            cin >> v[i];
        double tot = n*(n-1)/2;
        double cnt = 0;
        rep(i, 0, n)
            rep(j, i+1, n)
                if (__gcd(v[i], v[j]) == 1)
                    cnt++;
        if (cnt == 0)
            cout << "No estimate for this data set.";
        else 
            printf("%0.6f", sqrt(6.0*tot/cnt));
        cout << endl;
    }
    return 0;
}