#include <bits/stdc++.h>
#define ll long long

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
                ans[i][j]=ans[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            a[i][j]=ans[i][j];
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
            a[i][j]=ans[i][j];
        }
    }
}

ll fib(ll n)
{
    ll ans[2][2]={{1,1},{1,0}};
    powerMatrix(ans, n-1);
    return ans[0][0];
}

// Complete the solve function below.
long long solve(long long n) {
    long long i=0, x=0, s=0;
    while (1)
    {
        x=fib(i);
        i++;
        if (x>n)
            break;
        if (x%2==0)
        {
            s+=x;
        }
    }
    return s;
}

int main()
{

    int t; long long n;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        cin >> n;
        cout << solve(n) << "\n";
    }
    return 0;
}
