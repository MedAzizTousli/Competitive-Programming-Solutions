#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, d, sum=0;
    cin >> n >> d;
    vector <vector<int>> v(n);
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<d; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);          
        }
    }

    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
        {
            float s=0;
            for (int k=0; k<d; k++)
                s += pow(v[i][k] - v[j][k], 2);
            s = sqrt(s);
            if (s == (int)s)
                sum++;
        }
    cout << sum;
    return 0;
}
