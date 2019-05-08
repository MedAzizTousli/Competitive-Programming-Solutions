#include <bits/stdc++.h>

using namespace std;

long long sieve_size;
bitset<100000001> bs;
vector<long long> primes;

void sieve(long long upperbound){
    sieve_size=upperbound+1;
    bs.set();
    bs[0]=bs[1]=0;
    for(long long i=2;i<=sieve_size;i++) {
        if(bs[i]){
            for(long long j=i*i;j<=sieve_size;j+=i) {
                bs[j]=0;
            }
            primes.push_back(i);
        }
    }
}

vector<long long> trial_division(long long n) {
    vector<long long> factorization;
    while (n % 2 == 0) {
        factorization.push_back(2);
        n /= 2;
    }
    for (long long d = 3; d * d <= n; d += 2) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n,i=1;
    while (1)
    {
        cin >> n;
        if (n==0)
            break;
        vector<long long> factors=trial_division(n);
        for (vector<long long>::iterator it=factors.begin(); it!=factors.end(); it++,i++)
        {
            if(count(it,factors.end(),*it)==1)
                {
                    cout << *it << "^" << i << " ";
                    i=0;
                }
        }
        cout << "\n";
    }
    return 0;
}
