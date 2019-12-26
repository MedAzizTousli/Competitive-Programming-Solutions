#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll somme(vector<int> v, int x, int y)
{
    ll sum = 0;
    for (int i=x; i<=y; i++)
        sum += v[i];
    return sum;
}

int main() 
{
    int n, min, best;
    cin >> n;
    vector<int> v(n);
    best = 0;
    min = 10000;
    for (int i=0; i<n; i++)
        cin >> v[i];
    for (int t=0; t<n; t++)
    {
        ll sum1 = somme(v, 0, t);
        ll sum2 = somme(v, t+1, v.size()-1);
        if (abs(sum1-sum2)<=min)
            min = abs(sum1-sum2);
    }
    cout << min;
    return 0;
}