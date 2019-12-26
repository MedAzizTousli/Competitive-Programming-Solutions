#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    float res;
    cin >> n;
    if (n==1)
        res = 1.0;
    else 
        if (n%2==0)
            res = 0.5;
        else
        {
            int x = (n-1)/2+1;
            res = (float)x / (float)n;
        }
    printf("%.6f", res); 
    return 0;
}