#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n;
    string s;
    cin >> n;
    cin >> s;
    ll r = 0, g = 0, b = 0;
    rep(i, 0, s.size())
    {
        if (s[i] == 'R')
            r++;
        else if (s[i] == 'G')
            g++;
        else
            b++;
    }
    ll res = r*g*b;
    rep(i, 0, s.size() - 1)
        rep(j, i+1, s.size())
        {
            if (s[i] == 'R' && s[j] == 'B' && j+(j-i) < s.size() && s[j+(j-i)] == 'G')
                res--;
            if (s[i] == 'R' && s[j] == 'G' && j+(j-i) < s.size() && s[j+(j-i)] == 'B')
                res--;
            if (s[i] == 'G' && s[j] == 'B' && j+(j-i) < s.size() && s[j+(j-i)] == 'R')
                res--;
            if (s[i] == 'G' && s[j] == 'R' && j+(j-i) < s.size() && s[j+(j-i)] == 'B')
                res--;
            if (s[i] == 'B' && s[j] == 'R' && j+(j-i) < s.size() && s[j+(j-i)] == 'G')
                res--;
            if (s[i] == 'B' && s[j] == 'G' && j+(j-i) < s.size() && s[j+(j-i)] == 'R')
                res--;
        }
    cout << res;
    return 0;
}