#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 4) --> {1,2,3,4}
// rep(i, 4, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string s;
    cin >> s;
    set<int> se = {1, -1};
    map<int, char> mp = {{1, '+'}, {-1, '-'}};
    int a = s[0] - '0';
    int b = s[1] - '0';
    int c = s[2] - '0';
    int d = s[3] - '0';
    for (auto op1:se)
        for (auto op2:se)
            for (auto op3:se)
            {
                if(a+op1*b+op2*c+op3*d==7)
                {
                    cout<<a<<mp[op1]<<b<<mp[op2]<<c<<mp[op3]<<d<<"=7";
                    return 0;
                }
            }
    return 0;
}