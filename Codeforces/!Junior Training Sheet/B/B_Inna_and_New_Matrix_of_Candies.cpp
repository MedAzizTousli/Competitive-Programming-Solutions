#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n, m;
    cin >> n >> m;
    bool res = true;
    set<int> st;
    rep(i, 0, n)
    {
        string s;
        cin >> s;
        int x = find(s.begin(), s.end(), 'G') - s.begin();
        int y = find(s.begin(), s.end(), 'S') - s.begin();
        if (x > y)
            res = false;
        else 
            st.insert(y-x);
    }
    if (res == true)
        cout << st.size();
    else    
        cout << -1;
	return 0;
}