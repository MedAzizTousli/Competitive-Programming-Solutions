#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    int nb = 0;
    for (int i=0,j=s.size()-1; i<s.size()/2; j--,i++)
    {
        if (s[i] != s[j]) nb++;
    }
    cout << nb;
    return 0;
}