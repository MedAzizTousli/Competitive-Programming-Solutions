#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp_pair;
    map<int, int> mp_impair;
    for (int i=1; i<=n; i++)
    {
        int v;
        cin >> v;
        (i%2==0?mp_pair[v]++:mp_impair[v]++);
    }
    vector<pair<int,int>> v_pair;
    vector<pair<int,int>> v_impair;
    for (auto p:mp_pair)
        v_pair.push_back(make_pair(p.second, p.first));
    sort(v_pair.begin(), v_pair.end());
    for (auto p:mp_impair)
        v_impair.push_back(make_pair(p.second, p.first));
    sort(v_impair.begin(), v_impair.end());
    int sp = v_pair.size();
    int si = v_impair.size();
    if (v_pair[sp-1].second!=v_impair[si-1].second)
        cout << n/2-v_impair[si-1].first + n/2-v_pair[sp-1].first;
    else
    {
        if (v_pair[sp-1].first == n/2 && v_pair[sp-1].first == n/2)
            cout << n/2;
        else cout << min(n/2-v_impair[si-1].first + n/2-v_pair[sp-2].first,
                    n/2-v_impair[si-2].first + n/2-v_pair[sp-1].first);
    }
    return 0;
}