#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    if (n%2==0)
    {
        for(int i = n - 1; i >= 0; i -= 2)
            cout << v[i] << " ";
        for(int i = 0; i < n; i += 2)
            cout << v[i] << " ";
    }
    else 
    {
        for(int i = n - 1; i >= 0; i -= 2)
            cout << v[i] << " ";
        for(int i = 1; i < n; i += 2)
            cout << v[i] << " ";
    }
    return 0;
}