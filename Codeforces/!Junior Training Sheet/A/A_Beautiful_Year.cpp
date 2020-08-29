#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

bool verify(int n)
{
    string s = to_string(n);
    set<char> st;
    rep(i, 0, s.size())
        st.insert(s[i]);
    return st.size() == s.size();
}

signed main()
{
    int n;
    cin >> n;
    while(1)
    {
        n++;
        if (verify(n) == true)
            break;
    }
    cout << n;
    return 0;
}