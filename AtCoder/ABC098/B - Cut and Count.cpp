#include<bits/stdc++.h>
#define ll long long
using namespace std;

int calcul(string s1, string s2)
{
    vector<char> v;
    for (int i=0; i<s1.size(); i++)
        for (int j=0; j<s2.size(); j++)
        {
            if (s1[i] == s2[j])
            {
                if (find(v.begin(), v.end(), s1[i]) != v.end())
                    continue;
                else 
                    v.push_back(s1[i]);
            }
        }
    return v.size();
}

int main() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int m = 0;
    for (int i=0; i<n-1; i++)
    {
        string s1 = s.substr(0,i+1);
        string s2 = s.substr(i+1,n-i);
        m = max(m, calcul(s1, s2));
    }
    cout << m;
    return 0;
}