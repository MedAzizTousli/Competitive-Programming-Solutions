#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string s;
    cin >> s;
    int q;
    cin >> q;
    int sum = 0;
    deque<char> v;
    rep(i, 0, s.size())
        v.push_back(s[i]);
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
            sum++;
        else 
        {
            int f;
            char c;
            cin >> f >> c;
            if ((f == 1 && sum % 2 == 0) || (f == 2 && sum % 2 == 1))
                v.push_front(c);
            else
                v.push_back(c);
        }
    }
    if (sum % 2 == 1)
        reverse(begin(v), end(v));
    for (auto x:v)
        cout << x;
    // cout << v;
    return 0;
}