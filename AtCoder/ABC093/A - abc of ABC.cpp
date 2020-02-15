#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int x = count(s.begin(), s.end(), 'a');
    int y = count(s.begin(), s.end(), 'b');
    int z = count(s.begin(), s.end(), 'c');
    if (x==1 && y==1 && z==1)
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}