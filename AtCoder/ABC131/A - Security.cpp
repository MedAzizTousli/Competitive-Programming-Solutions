#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    char x;
    cin >> x;
    bool z = false;
    for (int i=1; i<4;i++)
    {
        char y;
        cin >> y;
        if (x==y)
            z = true;
        x = y;
    }
    cout << (z?"Bad":"Good");
    return 0;
}
