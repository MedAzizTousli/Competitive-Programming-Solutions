// https://www.spoj.com/problems/FIBOSUM/

#include <iostream>
#define ll long long
#define max 1000000007

using namespace std;

void multiply(ll a[2][2], ll b[2][2])
{
    ll ans[2][2];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            ans[i][j]=0;
            for (int k=0;k<2;k++)
            {
                ans[i][j]=ans[i][j]%max+(a[i][k]*b[k][j])%max;
            }
        }
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            a[i][j]=ans[i][j]%max;
        }
    }
}

void powerMatrix(ll a[2][2],ll n)
{
    ll ans[2][2]={{1,0},{0,1}};
    while(n>0)
    {
        if (n&1)
            multiply(ans,a);
        multiply(a,a);
        n/=2;
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            a[i][j]=ans[i][j]%max;
        }
    }
}

ll fib(ll n)
{
    ll ans[2][2]={{1,1},{1,0}};
    powerMatrix(ans, n-1);
    return ans[0][0];
}

int main()
{
    ll T, N, M;
    cin >> T;
    for (int i=0; i<T; i++)
    {
        cin >> N >> M;
        cout << (fib(M+2)-fib(N+1)+max) %max << "\n";
    }
    return 0;
}
