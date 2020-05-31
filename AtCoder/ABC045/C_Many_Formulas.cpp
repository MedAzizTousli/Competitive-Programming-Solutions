#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int N;
string s;
ll ans;

ll dfs(int i, ll left, ll sum)
{
    if (i == N)
        return left + sum;
    else 
        return dfs(i+1, s[i]-'0', sum + left)
        + dfs(i+1, left*10 + (s[i]-'0'), sum);
}

int main()
{
    cin >> s;
    N = s.size();
    cout << dfs(1, s[0] - '0', 0);
    return 0;
}