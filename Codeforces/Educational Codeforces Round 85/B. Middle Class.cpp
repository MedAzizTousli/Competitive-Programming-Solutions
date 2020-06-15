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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        rep(i, 0, n)
            cin >> v[i];
        sort(rbegin(v), rend(v));
        ll sum = 0;
        int i = 0;
        for(i = 0; i < n; i++)
        {
            sum += v[i];
            if (sum / (i+1) < x)
                break;
        }
        cout << i << "\n";
    }
    return 0;
}