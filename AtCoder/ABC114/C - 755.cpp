#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, res = 0;

ll power(ll x,ll k){
	ll res=1;
	while(k){
		if(k&1) res=res*x;
		x=x*x;
		k>>=1;
	}
	return res;
}

void dp(ll nb, ll ind, ll test)
{
    // cout << nb << endl;
    if (nb<=n)
    {
        if (test)
        {
            res++;
            dp(power(10,ind)*3+nb, ind+1, 1);
            dp(power(10,ind)*5+nb, ind+1, 1);
            dp(power(10,ind)*7+nb, ind+1, 1);
        }
        else 
        {
            ll x = nb;
            ll test3=0, test5=0, test7=0;
            while(x!=0)
            {
                ll y = x%10;
                x = x/10;
                if (y==3) test3=1;
                if (y==5) test5=1;
                if (y==7) test7=1;
            }
            if (test3 && test5 && test7)
            {
                res++;
                dp(power(10,ind)*3+nb, ind+1, 1);
                dp(power(10,ind)*5+nb, ind+1, 1);
                dp(power(10,ind)*7+nb, ind+1, 1);
            }
            else
            {
                dp(power(10,ind)*3+nb, ind+1, 0);
                dp(power(10,ind)*5+nb, ind+1, 0);
                dp(power(10,ind)*7+nb, ind+1, 0);
            }
        }
    }
}

int main() 
{
    cin >> n;
    dp(3,1,0);
    dp(5,1,0);
    dp(7,1,0);
    cout << res;
    return 0;
}