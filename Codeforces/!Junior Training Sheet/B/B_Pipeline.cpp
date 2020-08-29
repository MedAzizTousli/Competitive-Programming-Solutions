#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int sum(int n)
{
    return n*(n+1)/2;
}

int sum2(int a, int b)
{
    return (sum(b)-sum(a-1));
}

int binary(int n, int k)
{
    int st = 1, en = k;
    while (st < en)
    {
        int md = (st+en)/2;
        int s = sum2(md, k);

        if (s == n)
            return k - md + 1;
        
        if (s > n)
            st = md+1;
        else 
            en = md;
    }
    return k - st + 2;
}

signed main()
{
    int n, k;
    cin >> n >> k;
    if (n == 1)
        cout << 0;
    else if (n <= k)
        cout << 1;
    else 
    {
        n--;
        k--;
        if (sum(k)<n)
            cout << -1;
        else 
            cout << binary(n, k);
    }
    return 0;
}