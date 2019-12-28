#include<bits/stdc++.h>
#define ll long long
#define CST 380000.0
using namespace std;

int main() 
{
    int n;
    cin >> n;
    double sum = 0;
    for (int i=0; i<n; i++)
    {
        double x; string s;
        cin >> x; cin >> s;
        if (s == "JPY")
            sum += x;
        else
            sum += x*CST;
    }
    printf("%.5f", sum); 
    return 0;
}