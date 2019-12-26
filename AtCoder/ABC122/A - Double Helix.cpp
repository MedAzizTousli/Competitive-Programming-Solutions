#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    char c;
    cin >> c;
    if (c == 'A')
        cout << 'T';
    if (c == 'T')
        cout << 'A';
    if (c == 'C')
        cout << 'G';
    if (c == 'G')
        cout << 'C';
    return 0;
}