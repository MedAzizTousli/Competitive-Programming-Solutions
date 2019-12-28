#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int s;
    cin >> s;
    vector<int> v;
    v.push_back(s);
    int i=1;
    while(true)
    {
        i++;
        if (s%2==0)
            s = s/2;
        else 
            s = 3*s+1;
        if (find(v.begin(), v.end(), s)!=v.end())
        {
            cout << i;
            return 0;
        }
        v.push_back(s);
    }
}