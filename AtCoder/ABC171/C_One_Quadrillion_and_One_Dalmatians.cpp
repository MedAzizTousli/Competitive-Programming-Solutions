#include <bits/stdc++.h>
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    ll n;
    cin >> n;
    string s = "";
    while(n--)
    {
        char x = 'a' + n % 26;
        s += string(1, x);
        n /= 26;
    }
    reverse(begin(s), end(s));
    cout << s;
    return 0;
}