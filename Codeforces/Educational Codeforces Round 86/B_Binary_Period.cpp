#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        rep(i, 0, s.size())
            mp[s[i]]++;
        if (mp['1'] == s.size() || mp['0'] == s.size())
            cout << s << "\n";
        else 
        {
            cout << s[0];
            rep(i, 1, s.size())
            {
                if (s[i] == s[i-1] && s[i] == '1')
                    cout << '0' << s[i];
                else if (s[i] == s[i-1] && s[i] == '0')
                    cout << '1' << s[i];
                else 
                    cout << s[i];
            }
            cout << "\n";
        }
    }
    return 0;
}