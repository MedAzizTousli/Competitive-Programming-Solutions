#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    map<char, int> mp;
    for (int i=0; i<4; i++)
    {
        char x;
        cin >> x;
        mp[x]++;
    }
    bool y = true;
    for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
        if (it->second != 2)
            y = false;
    cout << (y?"Yes":"No");
    return 0;
}
