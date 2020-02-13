#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    int sum=0;
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    int min = *min_element(v.begin(), v.end());
    cout << n+(x-sum)/min;
    return 0;
}