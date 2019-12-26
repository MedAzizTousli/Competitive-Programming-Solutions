#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    vector<int> v(5);
    for (int i=0; i<5; i++)
        cin >> v[i];
    int k; cin >> k;
    string s = "Yay!";
    for (int i=0; i<4; i++)
        for (int j=i+1; j<5; j++)
            if (v[j]-v[i]>k)
                s = ":(";
    cout << s;
    return 0;
}