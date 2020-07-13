#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int k;
    cin >> k;
    queue<ll> q;
    rep(i, 1, 10)
        q.push(i);
    k--;
    while(k--)
    {
        ll x = q.front();
        q.pop();
        if (x % 10 != 0)
            q.push(10*x + x%10 - 1);
        q.push(10*x + x%10);
        if (x % 10 != 9)
            q.push(10*x + x%10 + 1);
    }
    cout << q.front();
    return 0;
}