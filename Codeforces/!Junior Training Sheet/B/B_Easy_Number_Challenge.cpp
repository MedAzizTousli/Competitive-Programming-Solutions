#include <bits/stdc++.h>
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int v[1000001];

int divisors(int n) {
    if (v[n] != 0)
        return v[n];
    int res = 0;
    for (int d = 1; d * d <= n; d += 1)
    {
        if (n%d==0) 
        {
            if (n/d == d) 
                res++;
            else
            {
                res += 2;
            } 
        }
    }
    return v[n] = res;
}

signed main()
{
    FLASH
	int a, b, c;
    cin >> a >> b >> c;
    int n = a * b * c;
    int M = 1073741824;
    int res = 0;
    rep(i, 1, a+1)
        rep(j, 1, b+1)
            rep(k, 1, c+1)
                res = res + divisors(i*j*k) % M;
    printf("%d", res);
	return 0;
}