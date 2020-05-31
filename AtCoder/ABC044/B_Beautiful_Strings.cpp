#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string w;
    cin >> w;
    map<char, int> mp;
    rep(i, 0, w.size())
        mp[w[i]]++;
    for (auto x:mp)
    {
        if (x.second % 2 != 0)
            return cout << "No", 0;
    }
    cout << "Yes";
    return 0;
}