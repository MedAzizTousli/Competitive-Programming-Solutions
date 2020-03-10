#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    vector<string> v;
    rep(i, 0, s.size() - t.size() + 1)
    {
        bool ok = true;
        int anc = i;
        string s2 = s;
        rep(j, 0, t.size())
        {
            if (s[i] != t[j] && s[i] != '?')
            {
                ok = false;
                break;
            }
            i++;
        }
        if (ok)
        {
            rep(k, 0, t.size())
                s2[anc+k] = t[k];
            rep(i, 0, s2.size())
            if (s2[i] == '?')
                s2[i] = 'a';
            v.push_back(s2);
        }
        i = anc;
    }
    if (v.size() == 0)
        return cout << "UNRESTORABLE", 0;
    else 
        {
            sort(begin(v), end(v));
            cout << v[0];
        }    
    return 0;
}