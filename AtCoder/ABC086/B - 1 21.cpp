#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string a, b;
    cin >> a >> b;
    int n = stoi(a+b);
    cout << (sqrt(n)==(int)sqrt(n)?"Yes":"No");
    return 0;
}