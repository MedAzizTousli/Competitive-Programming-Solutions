#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i=0; i<=25; i++)
        for (int j=0; j<=14; j++)
            v.push_back(4*i+7*j);
    vector<int>::iterator it = find(v.begin(), v.end(), n);
    if (it != v.end())
	    cout << "Yes";
    else
	    cout << "No";
    return 0;
}