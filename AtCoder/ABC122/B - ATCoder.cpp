#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int sum = 0;
    int maxx = 0;
    for (int i=0; i<s.size(); i++)
    {
        char c = s[i];
        if (c=='A'||c=='C'||c=='G'||c=='T')
            sum++;
        else
            sum=0;
        maxx = max(sum,maxx);
    }
    cout << maxx;
    return 0;
}