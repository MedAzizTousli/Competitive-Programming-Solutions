#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int lcm(int a, int b)
{
    return a*b / __gcd(a,b);
}

signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, a, d;
        cin >> n >> m >> a >> d;
        vector<int> v(5);
        int ans = 0;
        rep(i, 0, 5)
            v[i] = a + d * i;
        for(int mask = 1; mask < (1<<5); mask++)
        {
            int cnt = 0;
            int LCM = 1;
            for(int i=0; i<5; i++) if(mask & (1<<i))
            {
                cnt++;
                if (cnt == 1)
                    LCM = v[i];
                else 
                    LCM = lcm(LCM, v[i]);
            }
            int add = m / LCM - (n-1) / LCM;
            if (cnt % 2 == 1)
                ans += add;
            else 
                ans -= add;
        }
        cout << m - n + 1 - ans << endl;
    }
    return 0;
}