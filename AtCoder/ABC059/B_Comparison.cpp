#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if (a.size() > b.size())
        return cout << "GREATER", 0;
    else if (a.size() < b.size())
        return cout << "LESS", 0;
    else 
    {
        rep(i, 0, a.size())
        {
            if (a[i] > b[i])
                return cout << "GREATER", 0;
            else if (a[i] < b[i])
                return cout << "LESS", 0;
        }
    }
    cout << "EQUAL";
    return 0;
}