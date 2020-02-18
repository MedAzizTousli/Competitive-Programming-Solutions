#include<bits/stdc++.h>
#define ll long long
using namespace std;

int count(int n)
{
    string s = to_string(n);
    int sum = 0;
    for (int i=0; i<s.size(); i++)
        sum += s[i] - '0';
    return sum;
}

int main() 
{
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for (int i=0; i<=n; i++)
    {
        int x = count(i);
        // cout << x << endl;
        if (x>=a && x<=b)
            sum+=i;
    }
    cout << sum;
    return 0;
}