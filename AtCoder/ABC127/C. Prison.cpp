#include<bits/stdc++.h>
#include<functional>
#define ll long long
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    vector<int> vl(m);
    vector<int> vr(m);
    for (int i=0; i<m; i++)
    {
        cin >> vl[i];
        cin >> vr[i];
    }
    int min = *min_element(vr.begin(), vr.end());
    int max = *max_element(vl.begin(), vl.end());
    cout << (min - max +1 >0?min-max+1:0);
    return 0;
}