#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

ll pw(ll a, ll n)
{
    ll ans = 1;
    while (n > 0)
    {
        if (n % 2 != 0)
            ans = ans * a;
        a = a * a;
        n = n / 2;
    }
    return ans;
}

int sum(int v, int k)
{
    int i = 0;
    int res = 0;
    int x = 1;
    while (x != 0)
    {
        x = v/pw(k, i);
        res += x;
        i++;
    }
    return res;
}

int binary(int n, int k)
{
    int st = 1, en = n;
    int res = n;
    while (st < en)
    {
        int md = (st+en)/2;
        int s = sum(md, k);
        
        if (s >= n)
        {
            en = md;
            res = min(res, md);
        }
        else 
            st = md+1;
    }
    return res;
}

signed main()
{
    int n, k;
    cin >> n >> k;
    cout << binary(n, k);
    return 0;
}