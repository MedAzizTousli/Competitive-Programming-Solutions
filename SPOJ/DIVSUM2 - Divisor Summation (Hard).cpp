#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b) { long long res = 1;
  for (;b>0;b/=2)
  { if (b % 2) res *= a; 
  a *= a; }
  return res; }

map<long long, long long> trial_division(long long n) {
	map<long long, long long> m;
	while (n % 2 == 0) { 
		m[2]++;
        n /= 2;
	}
	for (long long d = 3; d * d <= n; d += 2) { 
		while (n % d == 0) {					
            m[d]++; 
			n /= d; 
		} 
	} 
	if (n > 1) 
		m[n] = 1; 
	return m; 
}

int main() {
    long long T;
    scanf("%lld",&T);
    while (T--){
        long long n;
        scanf("%lld",&n);
        map<long long, long long> m = trial_division(n);
        long long produit = 1;
        for ( map<long long, long long>::iterator it = m.begin(); it != m.end(); it++)
            {
                long long p = it->first;
                long long e = it->second;
                produit *= (binpow(p,e+1)-1) / (p-1);
            }
        printf("%lld\n", produit - n);
    }
    return 0;
}
