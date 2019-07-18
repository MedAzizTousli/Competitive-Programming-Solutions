// Submit here: https://www.codechef.com/problems/FLOW016

#include <iostream>

using namespace std;

long long gcd (long long a, long long b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long lcm (long long a, long long b)
{
    return a * b / gcd(a, b);
}

int main()
{
    long long T, a, b;
    cin >> T;
    for (long long i=0; i<T; i++)
    {
        cin >> a >> b;
        cout << gcd(a,b) << " " << lcm(a,b) << "\n";
    }
    return 0;
}
