#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    set<int> s;
    for (int i=0; i<n; i++)
    {
        int d;
        cin >> d;
        s.insert(d);
    }
    cout << s.size();
    return 0;
}