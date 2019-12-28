#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int y = stoi(s.substr(0,4));
    int m = stoi(s.substr(5,2));
    int d = stoi(s.substr(8,2));
    if ((y > 2019) ||
        (y == 2019 && m > 4))
        cout << "TBD";
    else 
        cout << "Heisei";
    return 0;
}