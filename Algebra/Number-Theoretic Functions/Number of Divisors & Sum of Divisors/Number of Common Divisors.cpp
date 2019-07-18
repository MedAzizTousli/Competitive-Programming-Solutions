// Submit here: https://www.spoj.com/problems/COMDIV/

#include <bits/stdc++.h>
using namespace std;

vector<long long> divisors(long long n) {
	vector<long long> divisors;
	for (long long d = 1; d * d <= n; d++) { 
		if (n % d == 0) {			
            divisors.push_back(d);
            divisors.push_back(n / d);
		}
	}
	return divisors;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    scanf("%lld",&T);
    while (T--){
        long long n1, n2;
        scanf("%lld",&n1);
        scanf("%lld",&n2);
        long long d = __gcd(n1,n2); // __gcd(a,b)
        if ( d == 1 ) 
            printf("%d\n", 1);
        else
        {
            vector<long long> div = divisors(d);
            unique(div.begin(), div.end());
            sort( div.begin(), div.end() );
            div.erase( unique( div.begin(), div.end() ), div.end() );
            printf("%d\n", div.size());
        }
    }
    return 0;
}
