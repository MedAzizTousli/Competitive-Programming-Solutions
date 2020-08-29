#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    double c;
    cin >> c;
    double delta = sqrt(1+8*c);
    double sol1 = (-1-delta) / 2;
    double sol2 = (-1+delta) / 2;
    if ((sol1 > 0 && (int)sol1 == sol1) || (sol2 > 0 && (int)sol2 == sol2))
        cout << "YES";
    else 
        cout << "NO";    
    return 0;
}