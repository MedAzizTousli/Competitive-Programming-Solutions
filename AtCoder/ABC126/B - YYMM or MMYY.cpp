#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string s, res;
    cin >> s;
    int x = stoi(s.substr(0,2));
    int y = stoi(s.substr(2,2));
    if (x>=1 && x<=12 && y>=1 && y<=12)
        res = "AMBIGUOUS";
    else if (x>=1 && x<=12 && (y==0 || y>12))
        res = "MMYY";
    else if ((x==0 || x>12) && y>=1 && y<=12)
        res = "YYMM";
    else
        res = "NA";
    cout << res;
    return 0;
}