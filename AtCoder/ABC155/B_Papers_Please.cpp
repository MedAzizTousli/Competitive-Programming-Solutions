#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (a%2==0)
            if (a%3!=0 && a%5!=0)
                return cout << "DENIED", 0;
    }
    cout << "APPROVED";
    return 0;
}