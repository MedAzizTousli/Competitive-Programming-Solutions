#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, m;
    cin >> n >> m;
    bool y = true;
    string t;
    cin >> t;
    set<char> st;
    rep(i, 0, t.size())
        st.insert(t[i]);
    if (st.size() != 1)
        y = false;
    rep(i, 0, n-1)
    {
        st.clear();
        string s;
        cin >> s;
        rep(i, 0, s.size())
            st.insert(s[i]);
        if (st.size() != 1)
            y = false;
        if (t == s)
            y = false;
        t = s;        
    }
    cout << (y?"YES":"NO");    
    return 0;
}