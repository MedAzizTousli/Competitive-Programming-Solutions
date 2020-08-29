#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int t;
    cin >> t;
    map<char, int> mp;
    while(t--)
    {
        char a;
        cin >> a;
        mp[a]++;
    }
    cout << (mp['A'] > mp['D']?"Anton":mp['A'] < mp['D']?"Danik":"Friendship");
    return 0;
}