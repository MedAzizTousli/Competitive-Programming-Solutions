#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a,b;
    float t;
    cin >> a >> b >> t;
    float curr=0;
    int bis=0;
    do
    {
        bis+=b;
        curr+=a;
    } while (curr<=t+0.5);
    cout << bis-b;
    return 0;
}