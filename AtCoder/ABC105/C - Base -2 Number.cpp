#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    if (n==0)
    {
        cout << 0;
        return 0;
    }
    string str = "";
    while (n!=0)
    {
        int res = n % -2;
        n = n / -2;
        if (res < 0)
        {
            res = res + 2;
            n = n + 1;
        }
        str = to_string(res) + str;
    }
    cout << str;
    return 0;
}