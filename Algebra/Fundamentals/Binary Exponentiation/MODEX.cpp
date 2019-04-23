#include <bits/stdc++.h>

using namespace std;

long long binpow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    {
        for (;b>0;b/=2)
        {
            if (b % 2) res = res * a % m;
            a = a * a % m;
        }
    return res;
    }
}

int main()
{
    long long T, a, b, m;

    cin >> T;

    for (long long i=0; i<T; i++)
    {
        cin >> a >> b >> m;
        cout << binpow(a, b, m);
    }
    return 0;
}
