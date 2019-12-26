#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i=0; i<n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d); 
    }
    
    int sum = 0;

    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
        {
            sum += v[i]*v[j];
        }
    cout << sum;    
    return 0;
}