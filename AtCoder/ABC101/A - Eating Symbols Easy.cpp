#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s;
    cin >> s;
    cout << count(s.begin(), s.end(), '+') - count(s.begin(), s.end(), '-');
    return 0;
}
