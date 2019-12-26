#include<bits/stdc++.h>
using namespace std;

vector<long long> division(long long n) {
	vector<long long> v;

	for (long long d = 1; d * d <= n; d += 1)
		if (n%d==0) v.push_back(d);
    v.push_back(n);
    return v;
}

int main() {
    long long n;
    cin >> n;
    vector<long long> v = division(n);
    vector<long long> m;
    if (v.size()==2)
        {
            cout << n-1;
            return 0;
        }
    for (long long i=0; i<v.size(); i++)
        m.push_back(n/v[i]+v[i]-2);
    cout << *min_element(m.begin(), m.end());
    return 0;
}