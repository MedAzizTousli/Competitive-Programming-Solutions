#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

bool verify(string s, int k)
{
    bool y = true;
    set<int> st;
    rep(i, 0, s.size())
    {
        int c = s[i] - '0';
        if (c <= k)
            st.insert(c);
    }
    return st.size() == k+1;
}

signed main()
{
    int n, k;
    cin >> n >> k;
    int res = 0;
    rep(i, 0, n)
    {
        string s;
        cin >> s;
        if (verify(s, k) == true)
            res++;
    }
    cout << res;
    return 0;
}