#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

bool f(tuple<int,int,int> a, tuple<int,int,int> b)
{
    return get<1>(a) < get<1>(b);
}

int main()
{
    int n;
    cin >> n;
    vector<tuple<int,int,int>> v;
    rep(i, 0, n)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.emplace_back(a, b, c);
    }
    sort(begin(v), end(v), f);
    vector<int> dp(n);
    rep(i, 0, n)
        dp[i] = get<2>(v[i]);
    rep(i, 1, n)
        rep(j, 0, i)
        {
            if (get<1>(v[j]) > get<0>(v[i]))
                continue;
            else 
                dp[i] = max(dp[i], dp[j] + get<2>(v[i]));
        }
    cout << *max_element(dp.begin(), dp.end());
    return 0;
}