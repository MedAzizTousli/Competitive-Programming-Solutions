#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int sum=0;
    for (int i=0; i<s.size(); i++)
        if (s[i] == t[i])
            sum++;  
    cout << sum;    
    return 0;
}