#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    map<int, int> mp = {
        {1, 0},
        {3, 0},
        {5, 0},
        {7, 0},
        {8, 0},
        {10, 0},
        {12, 0},
        {4, 1},
        {6, 1},
        {9, 1},
        {11, 1},
        {2, 2},
    };
    cout << (mp[x] == mp[y]?"Yes":"No");
    return 0;
}