// Submit here: https://www.spoj.com/problems/DIVSUM/

#include <bits/stdc++.h>
using namespace std;

vector<long long> divisors(long long n) {
	vector<long long> divisors;
	for (long long d = 1; d * d <= n; d++) { 
		if (n % d == 0) {	
            divisors.push_back(d);
            if (d != 1)
            {
                divisors.push_back(n / d);
            }
		}
	}
	return divisors;
}

int main() {
    long long T;
    scanf("%lld",&T);
    while (T--){
        long long n;
        scanf("%lld",&n);
        if (n == 1)
            {
                printf("%d\n", 0);
                continue;
            }
        vector<long long> div = divisors(n);
        sort( div.begin(), div.end() );
        div.erase( unique( div.begin(), div.end() ), div.end() );
        long long sum = 0;
        for(vector<long long>::iterator it = div.begin(); it != div.end(); it += 1)
            sum += *it;
        printf("%d\n", sum);
    }
    return 0;
}
