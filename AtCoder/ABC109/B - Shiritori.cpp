#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    bool y=true;
    set<string> s;
    string old;
    cin >> old;
    s.insert(old);
    for (int i=1; i<n; i++)
    {
        string x;
        cin >> x;
        if (x[0] != old[old.size()-1])
            y = false;
        if (find(s.begin(), s.end(), x) != s.end())
            y = false;
        s.insert(x);
        old = x;
    }
    cout << (y?"Yes":"No");
    return 0;
}