#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,sum,pred=-1;
    cin >> n;
    vector <int> va;
    vector <int> vb;
    vector <int> vc;
    for (int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        va.push_back(a);
    }
    for (int i=0; i<n; i++)
    {
        int b;
        cin >> b;
        vb.push_back(b);
    }
    for (int i=0; i<n-1; i++)
    {
        int c;
        cin >> c;
        vc.push_back(c);
    }
    sum = 0;
    for (int i=0; i<n; i++)
    {
        sum += vb[va[i]-1];
        if (pred+1 == va[i])
            sum += vc[pred-1];
        pred = va[i];
    }
    cout << sum;   
    return 0;
}