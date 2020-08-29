#include <bits/stdc++.h>

using namespace std;

long long binpowMod(long long a, long long b)
{
    a %= 1000;
    long long res = 1;
    {
        for (;b>0;b/=2)
        {
            if (b % 2) res = (res * a) % 1000;
            a = (a * a) % 1000;
        }
    return res;
    }
}

int main()
{
    long long T, n, k;
    double x, ans;

    cin >> T;

    for (long long i=0; i<T; i++)
    {
        cin >> n >> k;
        x = k*log10(n);
        x = x - (int)x;
        ans = pow(10, x);
        ans = ans*100;
        if (binpowMod(n,k) >= 100)
            cout << (int)ans << "..." << binpowMod(n,k) << "\n";
        else if (binpowMod(n,k) <= 99 && binpowMod(n,k) >= 10)
            cout << (int)ans << "...0" << binpowMod(n,k) << "\n";
        else
            cout << (int)ans << "...00" << binpowMod(n,k) << "\n";
    }

    return 0;
}
