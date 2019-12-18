// https://atcoder.jp/contests/abc144/tasks/abc144_b

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i=1; i<=9; i++)
        for (int j=1; j<=9; j++)
            v.push_back(i*j);
    vector<int>::iterator it = find(v.begin(), v.end(), n);
    if (it != v.end())
	    cout << "Yes";
    else
	    cout << "No";
    
    return 0;
}