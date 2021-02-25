#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    int N = pow(2,n);
    rep(i, 0, N/2)
    {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    rep(i, 0, N/2)
    {
        int a;
        cin >> a;
        v2.push_back(a);
    }
    int max1 = max_element(v1.begin(), v1.end()) - v1.begin();
    int max2 = max_element(v2.begin(), v2.end()) - v2.begin();
    if (v1[max1] > v2[max2])
        cout << max2 + 1 + N/2;
    else 
        cout << max1 + 1;
	return 0;
}