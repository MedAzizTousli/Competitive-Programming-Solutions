#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    set<int> s={111,222,333,444,555,666,777,888,999};
    for (auto x:s)
    {
        if (x>=n)
        {
            cout << x;
            return 0;
        }
    }
}