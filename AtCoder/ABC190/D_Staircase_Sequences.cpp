#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int N;
    cin >> N;
    set<int> s;
    int sq = (int)sqrt(N);
    rep(i, 1, sq+1)
    {
        if (N % i == 0)
        {
            s.insert(i);
            s.insert(N/i);
        }
    }
    int ans = 0;
    for (auto x:s)
    {
        if ((2*N/x-x+1) % 2 == 0)
            ans++;
    }
    cout << ans*2;
	return 0;
}