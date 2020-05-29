#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

bool palindrome(string s)
{
    string s1 = s;
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    return s2 == s1;
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    string s1 = s.substr(0, (n+1)/2-1);
    string s2 = s.substr((n+1)/2, (n+1)/2);
    if (palindrome(s) && palindrome(s1) && palindrome(s2))
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}