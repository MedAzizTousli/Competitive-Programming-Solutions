// Submit here: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=310

#include <bits/stdc++.h>

using namespace std;

long long binpow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
        for (;b>0;b/=2)
        {
            if (b % 2)
                res = (res * a) % m;
            a =(a * a) % m;
        }
    return res;
}

int main()
{
    long long a, b, m;
    string str;
    while (cin >> a)
    {
        cin >> b >> m;
        cout << binpow(a, b, m)<< "\n";
    }
    return 0;
}
