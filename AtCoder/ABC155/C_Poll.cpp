#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    int maxi = 0;
    for (auto x:mp)
        maxi = max(maxi, x.second);
    for (auto x:mp)
        if (x.second == maxi)
            cout << x.first << endl;
    return 0;
}