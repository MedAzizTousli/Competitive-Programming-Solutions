#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 1 && b != 1)
        cout << "Alice";
    else if (a != 1 && b == 1)
        cout << "Bob";
    else if (a == b)
        cout << "Draw";
    else if (a > b)
        cout << "Alice";
    else 
        cout << "Bob";
    return 0;
}