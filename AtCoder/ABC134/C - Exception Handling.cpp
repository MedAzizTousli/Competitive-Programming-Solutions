// https://atcoder.jp/contests/abc134/tasks/abc134_c

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, max2;
    cin >> n;
    vector <int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    vector <int> w = v;
    sort(v.begin(), v.end());
    int max1Index = max_element(v.begin(), v.end()) - v.begin();
    int max1 = v[max1Index];
    if (max1Index==0)
        max2 = max1;
    else
        max2 = v[max1Index-1];
    
    int nbmax = v.size()-max1Index;

    for (int i=0; i<n; i++)
    {
        if (w[i]==max1 && nbmax==1)
            cout << max2 << "\n";
        else
            cout << max1 << "\n";
    }
    return 0;
}