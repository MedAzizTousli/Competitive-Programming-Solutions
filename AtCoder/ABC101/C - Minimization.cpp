#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    n--; k--;
    cout << (n-1)/k+1;
    return 0;
}