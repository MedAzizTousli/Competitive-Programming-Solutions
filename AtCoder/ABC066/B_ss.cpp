#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

bool verify(string s)
{
    string s1 = s.substr(0, s.size()/2);
    string s2 = s.substr(s.size()/2, s.size());
    return s1 == s2;
}

int main()
{
    string s;
    cin >> s;
    ll n = s.size();
    rep(i, 0, n)
    {
        s = s.substr(0, s.size()-1);
        // cout << s.size() << endl;
        if (verify(s))
            return cout << s.size(), 0;
    }
    cout << 1;
    return 0;
}