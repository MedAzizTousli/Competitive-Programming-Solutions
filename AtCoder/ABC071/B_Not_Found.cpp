#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    string t = "abcdefghijklmnopqrstuvwxyz";
    set<char> sett;
    rep(i, 0, s.size())
        sett.insert(s[i]);
    int j = 0;
    for (auto it=sett.begin(); it!=sett.end();)
        while (j < t.size())
        {
            if (*it == t[j])
            {
                advance(it, 1);
                j++;
            }
            else 
            {
                cout << t[j];
                return 0;
            }
        }
    cout << "None";
    return 0;
}