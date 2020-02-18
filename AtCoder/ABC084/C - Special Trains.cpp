#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> c(n);
    vector<int> s(n);
    vector<int> f(n);
    for (int i=0; i<n-1; i++)
        cin >> c[i] >> s[i] >> f[i];
    vector<int> res;
    for (int i=0; i<n; i++)
    {
        int t = 0;
        for (int j=i; j<n-1; j++)
        {
            if (t<s[j]) 
                t = s[j];
            else if (t%f[j]!=0)
                t = t+f[j]-t%f[j];
            t += c[j];
        }
        res.push_back(t);
    }
    for (int i=0; i<n-1; i++)
        cout << res[i] << endl;
    cout << 0;
    return 0;
}