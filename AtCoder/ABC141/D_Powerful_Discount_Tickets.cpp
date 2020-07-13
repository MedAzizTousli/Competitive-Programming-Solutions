#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{   
    ll n,m;
    cin >> n >> m;
    vector<double> v(n);
    queue<double> q;
    rep(i, 0, n)
        cin >> v[i];
    sort(begin(v), end(v));
    ll i = v.size() - 1;
    double curr = v[i];
    while(m--)
    {
        curr = curr / 2.0;
        curr = (curr-(ll)curr>0.5?ceil(curr):floor(curr));
        q.push(curr);
        if (m == 0)
            break;
        if (!q.empty() && i != 0 && q.front() > v[i-1])
        {
            curr = q.front();
            q.pop();
        }
        else if (i == 0)
        {
            curr = q.front();
            q.pop();
        }
        else         
        {
            i--;
            curr = v[i];
        }
    }
    ll res = 0;
    while (!q.empty())
    {
        double x = q.front();
        q.pop();
        res += x;
    }
    rep(j, 0, i)
        res += v[j];
    cout << res;
    return 0;
}