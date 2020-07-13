#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string s;
    cin >> s;
    map<int, int> mp;
    int sum = 0;
    char curr = 'R';
    rep(i, 0, s.size())
    {
        if (curr == 'R' && s[i] == 'R')
            sum++;
        if (curr == 'L' && s[i] == 'L')
            sum++;
        if (curr == 'R' && s[i] == 'L')
        {
            mp[i-1] = sum;
            sum = 1;
            curr = 'L';
        }
        if (curr == 'L' && s[i] == 'R')
        {
            mp[i-1] = sum;
            sum = 1;
            curr = 'R';
        }
        if (i == s.size() - 1)
            mp[i] = sum;
    }
    vector<int> v(s.size(), 0);
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        int r = it->second;
        int i = it->first;
        it++;
        int l = it->second;
        int tot = r + l;
        if (tot % 2 == 0)
        {
            v[i] = tot / 2;
            v[i+1] = tot / 2;
        }
        else if (r % 2 == 0)
        {
            v[i] = tot / 2;
            v[i+1] = tot / 2 + 1;
        }
        else if (r % 2 == 1)
        {
            v[i] = tot / 2 + 1;
            v[i+1] = tot / 2;
        }
    }
    for (auto x:v)
        cout << x << " ";
    return 0;
}