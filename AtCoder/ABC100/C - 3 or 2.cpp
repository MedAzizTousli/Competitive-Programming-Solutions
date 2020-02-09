#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<long long> trial_division(long long n) {
	vector<long long> factorization;
	while (n % 2 == 0) { 
		factorization.push_back(2); 
		n /= 2; 
	}
	return factorization; 
}

int main() 
{
    long long n, sum=0;
    cin >> n;
    for (long long i=0; i<n; i++)
    {
        long long a; cin >> a;
        vector<long long> v = trial_division(a);
        sum += v.size();
    }
    cout << sum;
    return 0;
}