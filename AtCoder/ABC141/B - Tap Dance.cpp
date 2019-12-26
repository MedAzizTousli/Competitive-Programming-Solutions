#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool y=true;
    for (int i=0; i<s.size(); i++)
    {  
        if (i%2==0 && s[i] == 'L')
        {
            y = false;
            break;
        }
        else if (i%2==1 && s[i] == 'R')
        {
            y = false;
            break;
        }
    }
    if (y == true) cout << "Yes";
    else cout << "No";

    return 0;
}