#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b){
  if(a==0)return b;
  else return gcd(b%a,a);
}

int main() 
{
    ll a,b,c,d,lcm,p;
    cin >> a >> b >> c >> d;
    lcm=c*d/gcd(c,d);
    p=(b/c-(a-1)/c)+(b/d-(a-1)/d)-(b/lcm-(a-1)/lcm);
    cout << b-a+1-p;
    return 0;
}
