#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> v(n,0);
    int count = 0;
    for (int i=0; i<s.size()-1; i++)
    {
        if (s[i]=='A' && s[i+1]=='C')
            count++;
        v[i+1]=count;
    }
    for (int i=0; i<q; i++)
    {
        int l,r; cin>>l>>r;
        cout << v[r-1]-v[l-1] << "\n";
    }
    return 0;
}