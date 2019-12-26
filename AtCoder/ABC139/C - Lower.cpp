#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, sum, curr;
    cin >> n >> curr;
    sum = 0;
    vector<int> v;
    for (int i=1; i<n; i++)
    {
        int h;
        cin >> h;
        if (curr >= h)
            sum += 1;
        else
        {
            v.push_back(sum);
            sum = 0;
        }
        curr = h;        
    }
    v.push_back(sum);
    cout << *max_element(v.begin(), v.end());   
    return 0;
}