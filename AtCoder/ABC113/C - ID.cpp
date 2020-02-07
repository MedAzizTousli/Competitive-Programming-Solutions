#include<bits/stdc++.h>
#define ll long long
using namespace std;

string complete(int x)
{
    string s = to_string(x);
    string zero;
    for (int i=0; i<6-s.size(); i++)
        zero += "0";
    return zero+s;
}

int main() 
{
    int n, m;
    cin >> n >> m;
    vector<tuple<int, int, int>> v;
    for (int i=1; i<=m; i++)
    {
        int p, y;
        cin >> p >> y;
        v.emplace_back(p, y, i);
    }
    sort(v.begin(), v.end());
    vector<string> res(m+1);
    int old = get<0>(*v.begin());
    int i = 0;
    for(auto x: v)
    {
        if (old == get<0>(x))
            i++;
        else
            i = 1;
        old = get<0>(x);
        string part2 = complete(i);
        int index = get<2>(x);
        string part1 = complete(get<0>(x));
        res[index] = part1 + part2;
    }
    for (int i=1; i<=m; i++)
        cout << res[i] << "\n";
    return 0;
}