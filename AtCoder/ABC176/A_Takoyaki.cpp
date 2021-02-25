#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, x, t;
    cin >> n >> x >> t; 
    int resultat = n * t / x;
    int div = resultat / t;
    int mod = resultat % t;
    if (mod == 0)
        cout << resultat;
    else 
        cout << t * (div + 1);
    return 0;
}