#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int one = count(s.begin(),s.end(),'1');
    int zero = count(s.begin(),s.end(),'0');
    cout << min(one,zero)*2;
    return 0;
}