#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, string> mp = {
        {'2', "hon"}, 
        {'4', "hon"},
        {'5', "hon"},
        {'7', "hon"},
        {'9', "hon"},
        {'0', "pon"},
        {'1', "pon"},
        {'6', "pon"},
        {'8', "pon"},
        {'3', "bon"}
    };
    cout << mp[s[s.size()-1]];
    return 0;
}