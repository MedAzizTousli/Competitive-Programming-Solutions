#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string s;
    cin >> s;
    int a = -1, z;
    rep(i, 0, s.size())
    {
        if (a == -1 && s[i] == 'A')
            a = i;
        if (s[i] == 'Z')
            z = i;
    }
    cout << z-a+1;
    return 0;
}