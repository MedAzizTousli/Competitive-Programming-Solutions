#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    set<char> s;
    for (int i=0; i<n; i++)
    {
        char c;
        cin >> c;
        s.insert(c);
    }
    cout << (s.size()==3?"Three":"Four");
    return 0;
}