#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n=5, sum=0, min=10, y;
    vector <int> v(n);
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        int ah = x%10;
        if (ah<min && ah!=0)
        {
            y = x;
            min = ah;
        }
        v[i] = x;
    }
    bool z = true;
    for (int i=0; i<n; i++)
    {
        if (v[i] == y && z)
        {
            sum += y;
            z = false;
        }
        else
        {
            int x = v[i];
            int ah = x%10;
            if (ah != 0)
                x = x + (10-ah);
            sum += x;
        }
    }
    cout << sum;
    return 0;
}