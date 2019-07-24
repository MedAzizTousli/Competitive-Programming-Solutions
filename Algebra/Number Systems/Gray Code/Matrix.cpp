// Submit here: https://codeforces.com/problemsets/acmsguru/problem/99999/249

#include<bits/stdc++.h> 
using namespace std; 
 
int g (int n) {
    return n ^ (n >> 1);
}
 
int main()
{ 
    int n, m;
 
    scanf("%d", &n);
    scanf("%d", &m);
 
    long long x = 1 << n;
    long long y = 1 << m;
 
    vector<long long> v;
 
    for (long long i = 0; i < x * y; i++)
        v.push_back(g(i));
 
    for (int i = 0; i < x; i++)
    {
        long long a = i;
        long long b = x * 2 - i - 1;
        for (int j = 0; j < y / 2; j++)
        {
            printf("%lld %lld ", v[a], v[b]);
            a += x * 2;
            b += x * 2;
        }
        printf("\n");
    }
    return 0;
}
