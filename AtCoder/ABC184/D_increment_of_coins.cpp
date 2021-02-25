#include <bits/stdc++.h>
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

double dp[101][101][101];

double f(int a, int b, int c)
{
    if (dp[a][b][c])
        return dp[a][b][c];
    if (a == 100 || b == 100 || c == 100)
        return 0;
    double ans = 0;
    ans += (f(a+1, b, c)+1) * a / (a + b + c);
    ans += (f(a, b+1, c)+1) * b / (a + b + c);
    ans += (f(a, b, c+1)+1) * c / (a + b + c);
    dp[a][b][c] = ans;
    return ans;
}

signed main()
{
	int a, b, c;
    cin >> a >> b >> c;
	printf("%.9f\n",f(a,b,c));
	return 0;
}