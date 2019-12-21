// https://atcoder.jp/contests/abc131/tasks/abc131_b

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n,l,sum=0;
    cin >> n >> l;
    vector<int> v;
    vector<int> w;
    for (int i=1; i<=n; i++)
    {
        v.push_back(abs(l+i-1));
        w.push_back(l+i-1);
    }
    int minIndex = min_element(v.begin(), v.end()) - v.begin();
    w.erase(w.begin() + minIndex);
    for (int i=0; i<n-1; i++)
        sum += w[i];
    cout << sum;
    return 0;
}