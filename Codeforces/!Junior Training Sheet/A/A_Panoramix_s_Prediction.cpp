#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

bool isPrime(int number) {
    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2) {
        if(number % i == 0 ) return false;
    }
    return true;
}

signed main()
{
    int n, m;
    cin >> n >> m;
    bool y = true;
    rep(i, n+1, m)
    {
        if (isPrime(i) == true)
            y = false;
    }
    if (y == false || isPrime(m) == false)
        cout << "NO";
    else 
        cout << "YES";
    return 0;
}