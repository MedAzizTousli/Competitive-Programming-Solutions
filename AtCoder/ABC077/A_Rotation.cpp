#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1[0] == s2[2] && s1[1] == s2[1] && s1[2] == s2[0])
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}