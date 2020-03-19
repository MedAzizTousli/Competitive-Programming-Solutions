#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 1 && s[0] == 'L')
        {
            cout << 2 << "\n";
            continue;
        }
        if (s.size() == 1 && s[0] == 'R')
        {
            cout << 1 << "\n";
            continue;
        }
        int d = 1;
        int maxx = d;
        char c = s[0];
        bool y = false;
        if (s[0] == 'L')
            y = true;
        rep(i, 1, s.size())
        {
            if (s[i] == 'L')
                y = true;
            if (s[i] == 'L' && c == 'L')
                d++;
            else 
                d = 1;
            c = s[i];
            maxx = max(d, maxx);
        }
        cout << (y?maxx+1:1) << "\n";
    }
    return 0;
}
