#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int n, m;

int convert(int a, int b)
{
    return m*(a-1)+b;
}

signed main()
{
    int k, t;
    cin >> n >> m >> k >> t;
    vector<int> v;
    rep(i, 0, k)
    {
        int a, b;
        cin >> a >> b;
        int x = convert(a, b);
        v.push_back(x);
    }
    sort(begin(v), end(v));
    rep(i, 0, t)
    {
        int a, b;
        cin >> a >> b;
        int x = convert(a, b);
        int lower = lower_bound (v.begin(), v.end(), x) - v.begin();
        int final = x - lower;
        if (binary_search(all(v), x))
            cout << "Waste";
        else if (final % 3 == 1)
            cout << "Carrots";
        else if (final % 3 == 2)
            cout << "Kiwis";
        else 
            cout << "Grapes";
        cout << endl;
    }
    return 0;
}