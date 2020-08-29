#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    string cap;
    vector<string> man;
    vector<string> woman;
    vector<string> rat;
    while(n--)
    {
        string s, t;
        cin >> s >> t;
        if (t == "man")
            man.push_back(s);
        if (t == "woman" || t == "child")
            woman.push_back(s);
        if (t == "rat")
            rat.push_back(s);
        if (t == "captain")
            cap = s;
    }
    for (auto x:rat)
        cout << x << endl;
    for (auto x:woman)
        cout << x << endl;
    for (auto x:man)
        cout << x << endl;
    cout << cap;
    return 0;
}