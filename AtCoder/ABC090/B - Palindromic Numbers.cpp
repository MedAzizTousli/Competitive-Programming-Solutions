#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool palindrome(int n)
{
    string s1 = to_string(n);
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    return s2 == s1;
}

int main() 
{
    int a,b;
    cin >> a >> b;
    int ans = 0;
    for (int i=a; i<=b; i++)
        if (palindrome(i))
            ans++;
    cout << ans;
    return 0;
}