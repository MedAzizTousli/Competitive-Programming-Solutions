#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int a,b;
    cin >> a >> b;
    bool res = true;
    for (int i=0; i<a+b+1; i++)
    {
        char c;
        cin >> c;
        if (i==a && c!='-')
            res = false;
        if (i!=a && c=='-')
            res = false;
    }
    cout << (res?"Yes":"No");    
    return 0;
}