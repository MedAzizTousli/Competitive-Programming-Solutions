#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int n;
vector<int> v;

int place(int gap)
{
    int cnt = 1;
    int i = 0;
    for (int j = i+1; j < v.size(); j++)
    {
        if (v[j]-v[i] >= gap)
        {
            i = j;
            cnt++;
        }
    }
    return cnt;
}

int binary(int m, int c)
{
    int low = 1, high = m;
    int best = 0;
    while (low <= high)
    {
        int mid = (high + low + 1) / 2;
        int cnt = place(mid);
        if (cnt < c)
            high = mid - 1;
        else 
        {
            best = mid;
            low = mid + 1;
        }
    }
    return best;
}

signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int c;
        cin >> n >> c;
        v.resize(n);
        rep(i, 0, n)
            cin >> v[i];
        sort(begin(v), end(v));
        int m = v[v.size() - 1];
        cout << binary(m, c) << endl;
        v.clear();
    }
    return 0;
}