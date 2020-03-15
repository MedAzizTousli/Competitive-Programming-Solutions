#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int n;

void dfs(string s, char mx)
{
    if (s.size() == n)
        cout << s << "\n";
    else
        for (char c = 'a'; c <= mx; c++)
        {
            if (c == mx)
                dfs(s + c, mx + 1);
            else
                dfs(s + c, mx);
        }
}

int main()
{
    cin >> n;
    dfs("", 'a');
    return 0;
}