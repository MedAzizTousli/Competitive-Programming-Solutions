#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0;
    for (int i=0; i<n-2; i++)
        if (s[i]=='A' && s[i+1]=='B' && s[i+2]=='C')
            sum++;
    cout << sum;    
    return 0;
}