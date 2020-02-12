#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int  x, ans;
    cin >> x;
	if (x==1)
	{
		cout << 1;
		return 0;
	}
    for (int i=2; i<=x; i++)
    {
		int a = i,b=i;
		for (int j=2; j*j<=b; j++)
		{
			while (a%j == 0)
				a/=j;
			if (a==1)
				ans = i;
			a=b;
		}
    }
    cout << ans;
    return 0;
}