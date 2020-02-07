#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s;
    cin >> s;
    bool y = true;
    if (s[0] != 'A')
        y = false;
    if (count(s.begin()+2, s.end()-1, 'C') != 1)
        y = false;
    if (!y)
    {
        cout << "WA";
        return 0; 
    }
    for (int i = 1; i<s.size(); i++)
    {
        if (s[i] == 'C') continue;
        if (isupper(s[i]))
        {
            y = false;
            break;
        }
    }
    if (s[s.size()-1] == 'C') y = false;
    if (s[1] == 'C') y = false;
    cout << (y?"AC":"WA");
    return 0;
}