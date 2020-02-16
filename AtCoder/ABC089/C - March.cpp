#include<bits/stdc++.h>
#define ll long long
using namespace std;

unsigned nChoosek( unsigned n, unsigned k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

int main() 
{
    ll n;
    cin >> n;
    vector<ll> v(5,0);
    ll sum=0;
    for (ll i=0; i<n; i++)
    {
        string s;
        cin >> s;
        char x = s[0];
        if (x=='M') v[0]++;
        if (x=='A') v[1]++;
        if (x=='R') v[2]++;
        if (x=='C') v[3]++;
        if (x=='H') v[4]++;
    }
    for (int i=0; i<5; i++)
        for (int j=i+1; j<5; j++)
            for (int k=j+1; k<5; k++)
                sum += v[i]*v[j]*v[k];
    cout << sum;
    return 0;
}