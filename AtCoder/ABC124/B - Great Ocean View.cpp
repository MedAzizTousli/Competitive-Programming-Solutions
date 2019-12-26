#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    int sum = 1;
    int max = v[0];
    for (int i=1; i<n; i++)
    {
        if (v[i] >= max)
        {
            sum ++;
            max = v[i];
        }
    }
    cout << sum;        
    return 0;
}