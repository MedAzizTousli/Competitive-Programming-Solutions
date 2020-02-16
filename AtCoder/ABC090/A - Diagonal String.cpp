#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s="";
    for (int i=0; i<9; i++)
    {
        char c;
        cin >> c;
        if (i==0 || i == 4 || i == 8)
            s+=c;
    }
    cout << s;
    return 0;
}