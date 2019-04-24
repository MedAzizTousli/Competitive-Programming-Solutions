#include <iostream>

using namespace std;

long long gcd(long long a, long long b, long long & x, long long & y)
{
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }

    long long x1, y1;
    long long d = gcd(b % a, a, x1, y1);

    x = y1 - (b / a) * x1;
    y = x1;

    return d;
}

int main()
{
    long long n=1, m=1, a=1, k=1, p=0, q=0, z=0, d=0;
    while (1)
    {
        cin >> n >> m >> a >> k;
        if (n==0 && m==0 && a==0 && k==0)
            break;
        d = gcd(a,m,p,q);
        if ((n-m-k)%d==0)
        {
            z = (n-m-k) / d;
            p = p + m/d;
            q = q - a/d;
            p = p * z;
            q = -q * z;
            cout << p << endl;
            cout << q << endl;
        }
        else
        {
            cout << "Impossible" << "\n";
        }
    }
    return 0;
}
