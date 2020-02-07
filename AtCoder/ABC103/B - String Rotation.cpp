#include<bits/stdc++.h>
#define ll long long
using namespace std;

string rotate(string s)
{
    string s_rot = ""; 
    s_rot += s[s.size()-1];
    for (int i=0; i<s.size()-1; i++)
        s_rot += s[i];
    return s_rot;
}

int main() 
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    bool y = false;
    for (int i=0; i<s1.size(); i++)
    {
        string s3 = rotate(s2);
        if (s1 == s3)
        {
            y = true;
            break;
        }
        s2 = s3;
    }
    cout << (y?"Yes":"No");
    return 0;
}