#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int res = 1e9;
int sum;
string s;

void dfs(int i, int length, int old_sum)
{
    int new_sum = old_sum - (s[i] - '0');
    length++;
    if (length == s.size())
        return;
    if (new_sum % 3 == 0)
        res = min(res, length);
    rep(j, i+1, s.size())
        dfs(j, length, new_sum);
}

signed main()
{
    cin >> s;
    int n = stoll(s);
    while (n > 0)
    {
        int m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    if (sum % 3 == 0)
        return cout << 0, 0;
    rep(i, 0, s.size())
        dfs(i, 0, sum);
    cout << (res==1e9?-1:res);
    return 0;
}